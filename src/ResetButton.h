#pragma once
#ifndef __RESETBUTTON__
#define __RESETBUTTON__
#include "Button.h"
class Level1;
class ResetButton : public Button
{
public:
	ResetButton();
	~ResetButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);
};

#endif
