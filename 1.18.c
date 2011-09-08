#include <stdio.h>
#include <stdlib.h>
#define DELTA 10

int main(int argc, char* argv[])
{
	int c = 0, i = 0, len = DELTA;

	char* vals = (char*)malloc(sizeof(char) * len);
	while((c = getchar()) != EOF)
	{
		if('\n' != c)
		{
			vals[i++] = c;
		}
		else
		{
			for(i; i >= 0; i--)
			{
				if(vals[i] <=32)
				{vals[i] = '\0';}
				else
				{ break;}
			}
			if(i>0)printf("%s\n", vals);
			free(vals);
			i = 0;
			len = DELTA;
			vals = (char*)malloc(sizeof(char)*len);
		}
		if(i>len)
		{
			len += DELTA;
			vals = realloc(vals, sizeof(char) * len);
			if(NULL == vals)
			{
				printf("Error in memory allocation");
				return (1);
			}
			else
			{	
				;
			}
		}
	}	
	return 0;
}

	
