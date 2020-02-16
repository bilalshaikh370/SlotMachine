#pragma once
#ifndef __RESETBUTTON__
#define __RESETBUTTON__
#include "Button.h"

class ResetButton : public Button
{
public:
	ResetButton();
	~ResetButton();
	bool ButtonClick() override;

};

#endif
