#ifndef _RPS_H_
#define _RPS_H_

#include <iostream>

enum RPS_HAND { ROCK, PAPER, SCISSORS };
enum WINNER { PLAYER, COMPUTER, TIE };

class RPS {
  enum RPS_HAND playerHand;
  enum RPS_HAND computerHand;

  enum WINNER win;

protected:
  enum RPS_HAND getComputerHand (void);
  enum RPS_HAND getPlayerHand (void);
  enum WINNER compareHands (void);
  void printWinner (void);

public:
  RPS() {};
  ~RPS() {};

  bool continuePlaying(void);
  void playGame(void);
  void goodbye(void);
};

#endif