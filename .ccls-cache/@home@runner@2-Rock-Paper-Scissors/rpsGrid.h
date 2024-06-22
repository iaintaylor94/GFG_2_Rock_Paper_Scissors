#ifndef _RPS_GRID_H_
#define _RPS_GRID_H_

#include <vector>
#include <string>
#include <iostream>

class RPSGrid {
std::vector<std::string> grid;

protected:
  void initGrid (void);

public:
  RPSGrid() {
    initGrid();
  };
  ~RPSGrid() {};

  void printGrid (void);

  bool addX (int, int);
  bool addO (int, int);

};

#endif