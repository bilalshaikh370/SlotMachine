#include "SpinButton.h"
#include "Game.h"
#include "SlotMachine.h"

SpinButton::SpinButton()
	:Button(
		"../Assets/textures/SpinButton.png",
		"SpinButton",
		SPIN_BUTTON, glm::vec2(720, 570))
{
	m_isClicked = false;
}

SpinButton::~SpinButton()
{
}

bool SpinButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			Game::Instance()->changeSceneState(LEVEL_1);
			//slotMachine::Reels()->
			
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
