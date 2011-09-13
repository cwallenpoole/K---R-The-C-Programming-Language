#include "gameboard.h"
#include <stdlib.h>

Gameboard * new_Gameboard(int width, int height) {
    Gameboard *g = &(Gameboard){width,height,_createBoard(width,height)};
    return g;
}

int ** _createBoard(int width, int height) {
    int ** board = (int **)calloc(sizeof(int *), height);
    if(!board) return NULL;
    int ** local = board;
    while(height--)
    {
        int *row = (int *) calloc(sizeof(int), width);
        if(!row) return NULL;
        int w = width;
        while(w--)
        {
            *row = 0;
            row++;
        }
        *(local) = row;
        local++;
    }
    return board;
}
