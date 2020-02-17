#include "ResetButton.h"
#include "Game.h"
#include "Level1.h"

ResetButton::ResetButton()
	:Button(
		"../Assets/textures/reset.png",
		"ResetButton",
		RESET_BUTTON, glm::vec2(620, 570))
{
	m_isClicked = false;
}
ResetButton::~ResetButton()
{
}

bool ResetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			Game::Instance()->changeSceneState(LEVEL_1);
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

bool ResetButton::ButtonClick(Level1* sender)
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
