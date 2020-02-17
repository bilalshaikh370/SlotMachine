#pragma once
#ifndef __TWENTYBUTTON__
#define __TWENTYBUTTON__
#include "Button.h"
class Level1;
class TwentyButton : public Button
{
public:
	TwentyButton();
	~TwentyButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);

};

#endif
