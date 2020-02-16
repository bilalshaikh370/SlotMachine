#include "Game.h"
#include "BetButton.h"

BetButton::BetButton()
	:Button(
		"../Assets/textures/BetButton.png",
		"BetButton",
		SPIN_BUTTON, glm::vec2(520, 570))
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
