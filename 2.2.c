#include "inc.c"

MAIN{
    int c, i, lim;
    lim = 5;
    
    for(i = 0; (i < lim - 1)?((c = getchar()) != '\n'? c != EOF:0):0; i++)
        putchar(c);
}