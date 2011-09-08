#include "inc.c"

int returnSomething();

MAIN{
    if( 0? returnSomething():0 ) ;
    else printf("Doy!");
}

int returnSomething()
{
    printf("returning!");
    return 1;
}