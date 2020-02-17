#pragma once
#ifndef __FIFTYBUTTON__
#define __FIFTYBUTTON__
#include "Button.h"
class Level1;
class FiftyButton : public Button
{
public:
	FiftyButton();
	~FiftyButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);
};

#endif
