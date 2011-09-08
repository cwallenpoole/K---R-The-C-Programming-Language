#include <stdio.h>

int main(int argc, char* argv)
{
	int c;
	while((c = getchar()) != EOF )
	{
		switch(c)
		{
			case '\t': printf("\\t");
			case '\\': printf("\\");
			case '\n': printf("\\n");
			case '\r': printf("\\r");
			default: putchar(c); 
		}
	}
}
