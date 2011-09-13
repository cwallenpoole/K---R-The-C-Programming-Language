#include <stdio.h>
#include "cell.h"
#include "gameboard.h"
int main(int argc,
         char **argv){
    Gameboard *g = new_Gameboard(100,100);
    printf("hxw = %dx%d", g->height, g->width);
}
