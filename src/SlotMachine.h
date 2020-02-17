#pragma once
#ifndef __SLOTMACHINE__
#define __SLOTMACHINE__
#include <string>


class SlotMachine
{
public:

	SlotMachine();
	~SlotMachine();
	int playerMoney = 1000;
	int jackpot = 5000;
	int winnings = 0;
	int spinResult;
	int playerBet = 0;
	int winNumber = 0;
	int lossNumber = 0;
	std::string fruits = "";
	int grapes = 0;
	int bananas = 0;
	int oranges = 0;
	int cherries = 0;
	int bars = 0;
	int bells = 0;
	int sevens = 0;
	int blanks = 0;


	void resetFruitTally();
	void resetAll();
	void checkJackPot();
	bool checkRange(int value, int lowerBounds, int upperBounds);
	std::string* Reels();
	void determineWinnings();
	std::string showWinMessage();
	std::string showLossMessage();
	std::string Spin();
	void addBet(int betAmount);
	std::string getBetAmount() { return std::to_string(playerBet); }
	std::string getPlayerMoney() { return std::to_string(playerMoney); }

private:

};


#endif // !__SLOTMACHINE__
