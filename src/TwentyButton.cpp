#include "Game.h"
#include "TwentyButton.h"


TwentyButton::TwentyButton()
	:Button(
		"../Assets/textures/20$.png",
		"TwentyButton",
		TWENTY_BUTTON, glm::vec2(200, 570))
{
	m_isClicked = false;
}
TwentyButton::~TwentyButton()
{
}

bool TwentyButton::ButtonClick()
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
