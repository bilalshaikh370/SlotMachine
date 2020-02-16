

#include "SlotMachine.h"


void showPlayerStats()
{
  /* int winRatio = slotMachine::winNumber / slotMachine::turn;
    ("#jackpot").text("Jackpot: " + jackpot);
    ("#playerMoney").text("Player Money: " + playerMoney);
    ("#playerTurn").text("Turn: " + turn);
    ("#playerWins").text("Wins: " + winNumber);
    ("#playerLosses").text("Losses: " + lossNumber);
    ("#playerWinRatio").text("Win Ratio: " + (winRatio * 100).toFixed(2) + "%");*/
}

void slotMachine::resetFruitTally()
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

void slotMachine::showPlayerStats()
{
}

void slotMachine::resetAll()
{
    playerMoney = 1000;
    winnings = 0;
    jackpot = 5000;
    turn = 0;
    playerBet = 0;
    winNumber = 0;
    lossNumber = 0;
    winRatio = 0;
}

void slotMachine::checkJackPot()
{
}

void slotMachine::showWinMessage()
{
}

void slotMachine::showLossMessage()
{
}

//void checkRange(value, lowerBounds, upperBounds)
//{
//    if (value >= lowerBounds && value <= upperBounds)
//    {
//        return value;
//    }
//    else
//    {
//        return !value;
//    }
//}
//void slotMachine::Reels()
//{
//    std::string betLine[] = { "","", ""};
//    int outCome[] = {0, 0, 0};
//
//    for (int spin = 0; spin < 3; spin++) {
//        outCome[spin] = Math.floor((Math.random() * 65) + 1);
//        switch (outCome[spin]) {
//        case checkRange(outCome[spin], 1, 27):  // 41.5% probability
//            betLine[spin] = "blank";
//            blanks++;
//            break;
//        case checkRange(outCome[spin], 28, 37): // 15.4% probability
//            betLine[spin] = "Grapes";
//            grapes++;
//            break;
//        case checkRange(outCome[spin], 38, 46): // 13.8% probability
//            betLine[spin] = "Banana";
//            bananas++;
//            break;
//        case checkRange(outCome[spin], 47, 54): // 12.3% probability
//            betLine[spin] = "Orange";
//            oranges++;
//            break;
//        case checkRange(outCome[spin], 55, 59): //  7.7% probability
//            betLine[spin] = "Cherry";
//            cherries++;
//            break;
//        case checkRange(outCome[spin], 60, 62): //  4.6% probability
//            betLine[spin] = "Bar";
//            bars++;
//            break;
//        case checkRange(outCome[spin], 63, 64): //  3.1% probability
//            betLine[spin] = "Bell";
//            bells++;
//            break;
//        case checkRange(outCome[spin], 65, 65): //  1.5% probability
//            betLine[spin] = "Seven";
//            sevens++;
//            break;
//        }
//    }
//    return betLine[];
//}
//
//}

void slotMachine::determineWinnings()
{
}
