#pragma once
#ifndef __SPINBUTTON__
#define __SPINBUTTON__
#include "Button.h"

class SpinButton : public Button
{
public:
	SpinButton();
	~SpinButton();
	bool ButtonClick() override;

};

#endif
