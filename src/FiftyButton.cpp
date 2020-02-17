#include "Game.h"
#include "FiftyButton.h"
#include "TwentyButton.h"
#include "Level1.h"


FiftyButton::FiftyButton()
	:Button(
		"../Assets/textures/50$.png",
		"FiftyButton",
		TWENTY_BUTTON, glm::vec2(260, 570))
{
	m_isClicked = false;
}
FiftyButton::~FiftyButton()
{
}

bool FiftyButton::ButtonClick()
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

bool FiftyButton::ButtonClick(Level1* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{

			sender->addBet(50);
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
