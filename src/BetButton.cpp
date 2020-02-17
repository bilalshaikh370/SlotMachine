#include "Game.h"
#include "BetButton.h"
#include "Level1.h"

BetButton::BetButton()
	:Button(
		"../Assets/textures/Quit.png",
		"QuitButton",
		QUIT_BUTTON, glm::vec2(520, 570))
{
	m_isClicked = false;
}
BetButton::~BetButton()
{
}

bool BetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (m_isClicked)
		{
			Game::Instance()->changeSceneState(END_SCENE);
		
			
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}

bool BetButton::ButtonClick(Level1* sender)
{

	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{

			sender->spin();
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
