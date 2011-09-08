#include <stdio.h>

int main(int argc, char* argv)
{
	int c,test, inword;
	while((c = getchar()) != EOF)
	{
		test = c;
		if( test > 91 ) test-= 32;
		if( test < 65 && inword ){ inword = 0; putchar('\n');}
		else if (test >= 65){ inword=1; putchar(c);}
	}
}
