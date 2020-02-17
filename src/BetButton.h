#pragma once
#ifndef __BETBUTTON__
#define __BETBUTTON__
#include "Button.h"
class Level1;
class BetButton : public Button
{
public:
	BetButton();
	~BetButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);
};

#endif
