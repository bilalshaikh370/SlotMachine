

#include "SlotMachine.h"
#include <iostream>




SlotMachine::SlotMachine() {

}

SlotMachine::~SlotMachine() {

}

void SlotMachine::resetFruitTally()
{
    grapes = 0;
    bananas = 0;
    oranges = 0;
    cherries = 0;
    bars = 0;
    bells = 0;
    sevens = 0;
    blanks = 0;
}



void SlotMachine::resetAll()
{
    playerMoney = 1000;
    jackpot = 5000;

}

void SlotMachine::checkJackPot()
{
    int jackPotTry = floor(rand() * 51 + 1);
    int jackPotWin = floor(rand() * 51 + 1);
    if (jackPotTry == jackPotWin) {
        std::cout << "You Won the $" << jackpot << " Jackpot!!";
        playerMoney += jackpot;
        jackpot = 1000;
    }
}


bool SlotMachine::checkRange(int value, int lowerBounds, int upperBounds)
{
    if (value >= lowerBounds && value <= upperBounds)
    {
        return true;
    }
    else
    {
        return false;
    }
}








std::string* SlotMachine::Reels()
{
    std::string betLine[] = { "","", "" };
    int outCome[] = { 0, 0, 0 };

    for (int spin = 0; spin < 3; spin++) {
        outCome[spin] = floor((rand() * 65) + 1);

        if (checkRange(outCome[spin], 1, 27)) {  // 41.5% probability
            betLine[spin] = "blank";
            blanks++;
        }
        else if (checkRange(outCome[spin], 28, 37)) {// 15.4% probability
            betLine[spin] = "Grapes";
            grapes++;
        }
        else if (checkRange(outCome[spin], 38, 46)) {// 13.8% probability
            betLine[spin] = "Banana";
            bananas++;
        }
        else if (checkRange(outCome[spin], 47, 54)) { // 12.3% probability
            betLine[spin] = "Orange";
            oranges++;
        }
        else if (checkRange(outCome[spin], 55, 59)) { //  7.7% probability
            betLine[spin] = "Cherry";
            cherries++;
        }
        else if (checkRange(outCome[spin], 60, 62)) { //  4.6% probability
            betLine[spin] = "Bar";
            bars++;
        }
        else if (checkRange(outCome[spin], 63, 64)) {//  3.1% probability
            betLine[spin] = "Bell";
            bells++;
        }
        else if (checkRange(outCome[spin], 65, 65)) {//  1.5% probability
            betLine[spin] = "Seven";
            sevens++;
        }

    }
    return betLine;
}
void SlotMachine::determineWinnings()
{
    if (blanks == 0)
    {
        if (grapes == 3) {
            winnings = playerBet * 10;
        }
        else if (bananas == 3) {
            winnings = playerBet * 20;
        }
        else if (oranges == 3) {
            winnings = playerBet * 30;
        }
        else if (cherries == 3) {
            winnings = playerBet * 40;
        }
        else if (bars == 3) {
            winnings = playerBet * 50;
        }
        else if (bells == 3) {
            winnings = playerBet * 75;
        }
        else if (sevens == 3) {
            winnings = playerBet * 100;
        }
        else if (grapes == 2) {
            winnings = playerBet * 2;
        }
        else if (bananas == 2) {
            winnings = playerBet * 2;
        }
        else if (oranges == 2) {
            winnings = playerBet * 3;
        }
        else if (cherries == 2) {
            winnings = playerBet * 4;
        }
        else if (bars == 2) {
            winnings = playerBet * 5;
        }
        else if (bells == 2) {
            winnings = playerBet * 10;
        }
        else if (sevens == 2) {
            winnings = playerBet * 20;
        }
        else if (sevens == 1) {
            winnings = playerBet * 5;
        }
        else {
            winnings = playerBet * 1;
        }
        winNumber++;
        showWinMessage();
    }
    else
    {
        lossNumber++;
        showLossMessage();
    }

}

std::string SlotMachine::showWinMessage()
{
    playerMoney += winnings;
    //std::cout << "You Won: " << winnings;
    resetFruitTally();
    checkJackPot();
    return "You won:" + std::to_string(winnings);
}

std::string SlotMachine::showLossMessage()
{
    playerMoney -= playerBet;
    // std::cout << "You Lost!";
    resetFruitTally();
    return "You Lost";
}

std::string SlotMachine::Spin()
{
    Reels();
    determineWinnings();
    if (winnings != 0) {
        return showWinMessage();

    }
    else {
        return showLossMessage();
    }
}

void SlotMachine::addBet(int betmount)
{
    playerBet += betmount;
    playerMoney -= betmount;
}



