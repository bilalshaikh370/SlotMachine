#pragma once
#ifndef __FIVEDOLLARBUTTON__
#define __FIVEDOLLARBUTTON__
#include "Button.h"

class Level1;
class FiveDollarButton : public Button
{
public:
	FiveDollarButton();
	~FiveDollarButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);

};

#endif
