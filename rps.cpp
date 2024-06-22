#include "rps.h"


bool RPS::continuePlaying () {
  while (true) {
    char playing;
    std::cout << "Do you want to play? (y/n): ";
    std::cin >> playing;

    if (playing == 'y') { return true; } 
    if (playing == 'n') { return false; }

    std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
  }
}

enum RPS_HAND RPS::getComputerHand () {
  int handINT = rand() % 3;

  if (handINT == 0) return ROCK;
  if (handINT == 1) return PAPER;
  return SCISSORS;
}
enum RPS_HAND RPS::getPlayerHand () {
  while (true) {
    char hand;
    std::cout << "ROCK/PAPER/SCISSORS? (r/p/s): ";
    std::cin >> hand;

    if (hand == 'r') return ROCK; 
    if (hand == 'p') return PAPER;
    if (hand == 's') return SCISSORS;

    std::cout << "Invalid input. Please enter (r/p/s)." << std::endl;
  }
}
enum WINNER RPS::compareHands () {
  if (playerHand == ROCK && computerHand == SCISSORS) return PLAYER;
  if (playerHand == SCISSORS && computerHand == ROCK) return COMPUTER;

  if (playerHand == PAPER && computerHand == ROCK) return PLAYER;
  if (playerHand == ROCK && computerHand == PAPER) return COMPUTER;

  if (playerHand == SCISSORS && computerHand == PAPER) return PLAYER;
  if (playerHand == PAPER && computerHand == SCISSORS) return COMPUTER;

  return TIE;
}
void RPS::printWinner () {
  std::cout << "Player: ";
  if (playerHand == ROCK) std::cout << "ROCK";
  if (playerHand == PAPER) std::cout << "PAPER";
  if (playerHand == SCISSORS) std::cout << "SCISSORS";
  std::cout << std::endl;

  std::cout << "Computer: ";
  if (computerHand == ROCK) std::cout << "ROCK";
  if (computerHand == PAPER) std::cout << "PAPER";
  if (computerHand == SCISSORS) std::cout << "SCISSORS";
  std::cout << std::endl;
  
  if (win == PLAYER) std::cout << "You win!" << std::endl;
  else if (win == COMPUTER) std::cout << "You lose!" << std::endl;
  else std::cout << "Tie!" << std::endl << std::endl;
}

void RPS::playGame () {
  playerHand = getPlayerHand();
  computerHand = getComputerHand();

  win = compareHands();

  printWinner();
}



void RPS::goodbye () {
  std::cout << "Thanks for playing!" << std::endl;
}