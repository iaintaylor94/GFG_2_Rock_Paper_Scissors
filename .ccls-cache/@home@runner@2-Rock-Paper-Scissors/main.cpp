#include <iostream>

#include "rps.h"

int main() {
  RPS rps;
  while (rps.continuePlaying()) { 
    rps.playGame();
  }
  rps.goodbye();
}