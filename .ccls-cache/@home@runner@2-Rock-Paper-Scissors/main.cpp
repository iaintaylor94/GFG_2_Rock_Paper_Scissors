#include <iostream>

#include "rps-interface.h"

int main() {
  RPSInterface rpsInterface;
  while (rpsInterface.continuePlaying()) { 
    rpsInterface.playGame();
  }
  rpsInterface.goodbye();
}