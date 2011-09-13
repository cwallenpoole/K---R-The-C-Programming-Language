#ifndef CELL_H
#define CELL_H 1
#include "gameboard.h"

typedef struct  {
    int x;
    int y;
    Gameboard * board;
} Cell;

#endif
