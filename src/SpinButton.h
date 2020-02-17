#pragma once
#ifndef __SPINBUTTON__
#define __SPINBUTTON__
#include "Button.h"

class Level1;

class SpinButton : public Button
{
public:
	SpinButton();
	~SpinButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);
private:
	bool m_isClicked;

};

#endif
