#include "rpsGrid.h"

void RPSGrid::initGrid() {
  std::string vertical = "   |   |   ";
  std::string horizontal = "-----------";

  grid.clear();

  grid.push_back(vertical);
  grid.push_back(vertical);
  grid.push_back(vertical);

  grid.push_back(horizontal);

  grid.push_back(vertical);
  grid.push_back(vertical);
  grid.push_back(vertical);

  grid.push_back(horizontal);

  grid.push_back(vertical);
  grid.push_back(vertical);
  grid.push_back(vertical);
}
void RPSGrid::printGrid() {
  for (auto line : grid) {
    std::cout << line << std::endl;
  }
  std::cout << std::endl;
}

bool RPSGrid::addX (int row, int collumn) {
  switch (row) {
    case 0:
      row = 1;
      break;
    case 1:
      row = 5;
      break;
    case 2:
      row = 9;
      break;
  }
  switch (collumn) {
    case 0:
      collumn = 1;
      break;
    case 1:
      collumn = 5;
      break;
    case 2:
      collumn = 9;
      break;
  }

  if (grid[row][collumn] != ' ') return false;
  
  grid[row][collumn] = 'X';
  return true;
}
bool RPSGrid::addO (int row, int collumn) {
  switch (row) {
    case 0:
      row = 1;
      break;
    case 1:
      row = 5;
      break;
    case 2:
      row = 9;
      break;
  }
  switch (collumn) {
    case 0:
      collumn = 1;
      break;
    case 1:
      collumn = 5;
      break;
    case 2:
      collumn = 9;
      break;
  }

  if (grid[row][collumn] != ' ') return false;
  
  grid[row][collumn] = 'O';
  return true;
}