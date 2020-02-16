#include "Game.h"
#include "5DollarButton.h"

FiveDollarButton::FiveDollarButton()
	:Button(
		"../Assets/textures/5$.png",
		"FiveDollarButton",
		SPIN_BUTTON, glm::vec2(80, 570))
{
	m_isClicked = false;
}
FiveDollarButton::~FiveDollarButton()
{
}

bool FiveDollarButton::ButtonClick()
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
