#include <stdio.h>
#include <string.h>
int main( int argc, char* argv )
{
	char str[] = "O'Doyle rulez!!1!";
	char tmp;
	int len = strlen(str);
	int i = 0;
/*
	for(i=0; i < len/2; i++)
	{
		tmp = str[i];
		str[i] = str[len - i-1];
		str[len - i-1]= tmp;
	}
*/
	while( i < len/2)
	{
		tmp = str[i++];
		str[i - 1] = str[len - i];
		str[len - i] = tmp;
	}
	printf("str = %s; i = %d\n", str, i);
}
