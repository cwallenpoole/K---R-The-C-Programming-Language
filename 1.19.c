#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// Given enough time: find out why this will not work with a * but it does w/ []
	char str[44]=  "A rat in Tom's house may eat Tom's ice cream";
	int tmp;
	int i,len,t;
	for(i = 0; str[i] != '\0'; i++) 
		; // pass, we're just getting the length here.
	len = i;

	for(i = 0; i < len/2; i++)
	{
		tmp = str[i];
		t = len - ( 1 + i );
		str[i] = str[t];
		str[t] = tmp;
	
	}
	printf("%s\n", str);
}
