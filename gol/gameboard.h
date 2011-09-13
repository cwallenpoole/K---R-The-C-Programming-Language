#ifndef GAMEBOARD_H
#define GAMEBOARD_H 1

typedef struct Gameboad {
    int height;
    int width;
    int ** firstSquare;
} Gameboard;

Gameboard * new_Gameboard(int width, int height);
int** _createBoard(int width, int height);
#endif
