#include <stdio.h>

int main(int argc, char* argv[])
{
    // just curious what these all looked like
    char* escs = "\a\b\f\n\r\t\v\\\?\'\"\101\x31\0";
    char tmp;
    while(*(escs) != '\0')
    {
        tmp = (escs++)[0];
        printf("-->'%s'<--\n", &tmp);
    }
    
    printf("\101");
}