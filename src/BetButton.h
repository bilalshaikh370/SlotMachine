#pragma once
#ifndef __BETBUTTON__
#define __BETBUTTON__
#include "Button.h"

class BetButton : public Button
{
public:
	BetButton();
	~BetButton();
	bool ButtonClick() override;

};

#endif
