#pragma once
#ifndef __FIVEDOLLARBUTTON__
#define __FIVEDOLLARBUTTON__
#include "Button.h"

class FiveDollarButton : public Button
{
public:
	FiveDollarButton();
	~FiveDollarButton();
	bool ButtonClick() override;

};

#endif
