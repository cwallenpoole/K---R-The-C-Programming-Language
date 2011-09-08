#include <stdio.h>

int main(int argc, char* argv)
{
	int c, count = 0;
	while((c = getchar()) != EOF)
	{
		if( '\n' == c || ' ' == c || '\b' == c || '\t' == c )
			count++;
	}
	printf("count = %d\n", count);
}
