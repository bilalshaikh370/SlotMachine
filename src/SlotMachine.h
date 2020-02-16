#pragma once
#ifndef __SLOTMACHINE__
#define __SLOTMACHINE__
#include <string>


class slotMachine
{
public:
	int playerMoney = 1000;
	int winnings = 0;
	int jackpot = 5000;
	int turn = 0;
	int playerBet = 0;
	int winNumber = 0;
	int lossNumber = 0;
	int spinResult;
	std::string fruits = "";
	int winRatio = 0;
	int grapes = 0;
	int bananas = 0;
	int oranges = 0;
	int cherries = 0;
	int bars = 0;
	int bells = 0;
	int sevens = 0;
	int blanks = 0;


	void resetFruitTally();
	void showPlayerStats();
	void resetAll();
	void checkJackPot();
	void showWinMessage();
	void showLossMessage();
	void checkRange();
	void Reels();
	void determineWinnings();

private:
	slotMachine();
	~slotMachine();
};


#endif // !__SLOTMACHINE__
