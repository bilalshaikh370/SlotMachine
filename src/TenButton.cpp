#include "Game.h"
#include "TenButton.h"
#include "Level1.h"
TenButton::TenButton()
	:Button(
		"../Assets/textures/10.png",
		"TenButton",
		TEN_BUTTON, glm::vec2(140, 570))
{
	m_isClicked = false;
}
TenButton::~TenButton()
{
}

bool TenButton::ButtonClick()
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

bool TenButton::ButtonClick(Level1* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{

			sender->addBet(10);
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
