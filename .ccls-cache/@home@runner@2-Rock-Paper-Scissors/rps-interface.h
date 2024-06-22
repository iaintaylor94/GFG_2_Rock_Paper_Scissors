#ifndef _RPS_INTERFACE_H_
#define _RPS_INTERFACE_H_

#include <iostream>
#include <string>

#include "rps.h"

class RPSInterface : public RPS {

public:
  RPSInterface() {};
  ~RPSInterface() {};

  bool continuePlaying(void);
  void playGame(void);
  void goodbye(void);
};

#endif