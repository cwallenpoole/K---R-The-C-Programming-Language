#include <stdio.h>
int isWhiteSpace(char c);
int main(int argc, char* argv)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if( isWhiteSpace( c ) )
		{
			putchar( ' ' );
			while( isWhiteSpace( c ) )
			{
				c = getchar();
				if( EOF == c ) return 0;
			}
		}
		putchar(c);
	}
}

int isWhiteSpace( char c )
{
	return (c != EOF && ( ' ' == c || '\n' == c || '\t' == c || '\r' == c || '\b' == c) );
}
