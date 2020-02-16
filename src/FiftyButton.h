#pragma once
#ifndef __FIFTYBUTTON__
#define __FIFTYBUTTON__
#include "Button.h"

class FiftyButton : public Button
{
public:
	FiftyButton();
	~FiftyButton();
	bool ButtonClick() override;

};

#endif
