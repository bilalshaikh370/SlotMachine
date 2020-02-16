#pragma once
#ifndef __TWENTYBUTTON__
#define __TWENTYBUTTON__
#include "Button.h"

class TwentyButton : public Button
{
public:
	TwentyButton();
	~TwentyButton();
	bool ButtonClick() override;

};

#endif
