#pragma once
#ifndef __LEVEL1__
#define __LEVEL1__

#include "Scene.h"
#include "Middle.h"
#include "Button.h"
#include "SpinButton.h"
#include "ResetButton.h"
#include "BetButton.h"
#include "5DollarButton.h"
#include "TenButton.h"
#include "TwentyButton.h"
#include "FiftyButton.h"
#include "Banana.h"
#include "Bar.h"
#include "Bell.h"
#include "Blank.h"
#include "Cherry.h"
#include "Grapes.h"
#include "Orange.h"
#include "Seven.h"

class Level1 : public Scene
{
public:
	Level1();
	~Level1();

	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:
	//game objects
	Middle* m_pMiddle;
	Banana* m_pBanana1;
	Banana* m_pBanana2;
	Banana* m_pBanana3;
	Cherry* m_pCherry1;
	Cherry* m_pCherry2;
	Cherry* m_pCherry3;
	Grapes* m_pGrapes1;
	Grapes* m_pGrapes2;
	Grapes* m_pGrapes3;
	Orange* m_pOrange1;
	Orange* m_pOrange2;
	Orange* m_pOrange3;
	Bell* m_pBell1;
	Bell* m_pBell2;
	Bell* m_pBell3;
	Seven* m_pSeven1;
	Seven* m_pSeven2;
	Seven* m_pSeven3;
	Bar* m_pBar1;
	Bar* m_pBar2;
	Bar* m_pBar3;
	Blank* m_pBlank1;
	Blank* m_pBlank2;
	Blank *m_pBlank3;
	
	
	
	SpinButton* m_pSpinButton;
	ResetButton* m_pResetButton;
	BetButton* m_pBetButton;
	FiveDollarButton* m_pFiveDollarButton;
	TenButton* m_pTenButton;
	TwentyButton* m_pTwentyButton;
	FiftyButton* m_pFiftyButton;

	Label* m_pCurrentBet;
	Label* m_pPlayerMoney;


	
	glm::vec2 m_mousePosition;

};

#endif /* defined (__START_SCENE__) */