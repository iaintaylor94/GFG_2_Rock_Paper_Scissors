#ifndef _RPS_INTERFACE_H_
#define _RPS_INTERFACE_H_

#include <iostream>
#include <string>

class RPSInterface {
  //bool first; // 'X' plays first

public:
  RPSInterface() {};
  ~RPSInterface() {};

  bool continuePlaying(void);
  void playGame(void);
  void goodbye(void);
};

#endif