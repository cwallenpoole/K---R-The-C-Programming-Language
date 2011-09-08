#include <stdio.h>
#include <stdlib.h>
#define RET_THRESHOLD 4


char* getinput();
int main(int argc, char* argv[])
{
	char* gi;
	while( NULL != (gi = getinput()))
	{
		printf("a line: %s\n", gi);
		free(gi);
	}
	return 0;
}

char* getinput()
{
	int c, uIlen, i = 0;
	uIlen = 2 * RET_THRESHOLD;

	char* userInput = (char *)malloc(sizeof(char) * uIlen);
	while((c = getchar()) != EOF)
	{
		if('\n' == c)
		{
			if(i > RET_THRESHOLD) return userInput;
			free(userInput);
			uIlen = 2 * RET_THRESHOLD;
			userInput = (char *)malloc(sizeof(char) * uIlen);
			i = 0;
		}
		else
		{
			userInput[i++] = c;
			if(i>= uIlen)
			{
				uIlen += RET_THRESHOLD;
				userInput = realloc(userInput, uIlen * sizeof(char));
				if( NULL == userInput ) return NULL;
			}
		}
	}
	return NULL;
}

