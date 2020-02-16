#pragma once
#ifndef __TENBUTTON__
#define __TENBUTTON__
#include "Button.h"

class TenButton : public Button
{
public:
	TenButton();
	~TenButton();
	bool ButtonClick() override;

};

#endif
