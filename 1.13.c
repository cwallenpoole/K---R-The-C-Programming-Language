#include <stdio.h>
#include <stdlib.h>
#define TESTING_OUTPUT 0
#define TESTING_INPUT 0
#define BASE_WORD_LENGTH 15
int* getWordLengths();
void outputChart(int[], int);

int main(int argc, char* argv)
{
//*
	if( TESTING_OUTPUT )
	{
	//*	
		int chart[5] = {0,4,6,7,8};
		putchar('?');
		printf("outputting chart\n");
		outputChart(chart,5);
	//*/	
		return 2;
	}
	if( TESTING_INPUT )
	{
		int* lens = getWordLengths();
		//*
		int i = 0;
		int longestWordLength = 0;
		for(i = 0; i >= 0; i++)
		{
			if(lens[i] < 0) break;
		}
		longestWordLength = i-1;
		if(TESTING_INPUT)printf("Max = %d\n",longestWordLength);
		//*/
	}

	int* lengths = getWordLengths();
	int i, lastWord;
	for(i = 0; lengths[i] >= 0; i++)lastWord = i;
	outputChart(lengths, lastWord + 1);
//*/
}

int* getWordLengths()
{
	int* ret = (int *) malloc(sizeof(int)*(BASE_WORD_LENGTH + 1));
  	int i, test, wordLength = 0;
	for(i=0; i<BASE_WORD_LENGTH; i++)
		ret[i] = 0;
  	while((test = getchar()) != EOF)
  	{
      		if( test > 91 ) test-= 32;
      		if( test < 65 ){ if(wordLength)ret[wordLength]++; wordLength = 0;}
      		else if (test >= 65){ wordLength++;}
 	}
	for(i = BASE_WORD_LENGTH; i > 0; i--)
	{
		if(ret[i-1]>0)
		{
			ret[i] = -1;
			break;
		}
	}
	return ret;
}

void outputChart(int* chart, int len)
{
	int* tmp     = chart;
	char* space  = (len < 10)?" ":"  ";
        char* format = (len < 10)?"%d":"%2d"; 
	int maxOutput = 0,lev = 0,i = 0;	
	if( TESTING_OUTPUT ) printf("About to calc max length\n");
	for(i = 0; i < len; i++)
	{
		if(*(tmp) > maxOutput) maxOutput = *(tmp);
		tmp++;
	}
	if( TESTING_OUTPUT ) printf("max length calculated to be %d\n", maxOutput);
 	for(lev = maxOutput + 1; lev > 0; lev--)
	{
		if( !(lev % 5) ) printf("%d", lev);
		else printf(" ");
                printf("| ");
		for(i = 0; i < len; i++)
		{
			if( chart[i] >= lev ) printf(format,i);
			else printf(space);
			printf(" ");
		}
		printf("\n");
	}

	for(i = -2; i < len * 2; i++)
		printf("--");
	printf("\n   ");
	for(i = 0; i < len; i++)
        {
		printf(format, i);
		printf(" ");
        }
}
