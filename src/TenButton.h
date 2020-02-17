#pragma once
#ifndef __TENBUTTON__
#define __TENBUTTON__
#include "Button.h"
class Level1;
class TenButton : public Button
{
public:
	TenButton();
	~TenButton();
	bool ButtonClick() override;
	bool ButtonClick(Level1* sender);

};

#endif
