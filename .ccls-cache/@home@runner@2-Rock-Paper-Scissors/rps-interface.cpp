#include "rps-interface.h"

bool RPS::continuePlaying() {
  while (true) {
    char answer;
    
    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> answer;
    std::cout << "input: -" << answer << "-" << std::endl;

    if (answer == 'y') return true;
    if (answer == 'x') return false;
      
    else std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
  }
}

void RPS::playGame() {
  bool first = getFirst();
  startGame(first);
}

void RPS::goodbye() {
  std::cout << "Thanks for playing. Goodbye!" << std::endl;
}