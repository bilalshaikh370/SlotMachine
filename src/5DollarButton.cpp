#include "Game.h"
#include "5DollarButton.h"
#include "Level1.h"

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
			//Game::Instance()->changeSceneState(LEVEL_1);
			m_isClicked = true;
			//m_pCurrentBet
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}

bool FiveDollarButton::ButtonClick(Level1* sender)
{

	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{

			sender->addBet(5);
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
