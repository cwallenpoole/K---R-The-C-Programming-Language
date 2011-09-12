#include "inc.c"

void squeeze(char str[], char rem[]);
MAIN{
	char sentence[32] = "A man, a plan, a canal, Panama\0";
	char remove[3] = "Aa\0";
	squeeze(sentence, remove);
	printf("%s\n", sentence);
}


void squeeze(char str[], char rem[])
{
	int i,j;
	int rems[255];
	for(i = 0; i < 256; i++) rems[i] = 0;
	for(i = 0; rem[i] != '\0'; i++)
	{
		// create an O(1) lookup structure!
		rems[rem[i]] = 1;
	}
	for(i = j = 0; str[i] != '\0'; i++)
	{
		if(!rems[str[i]])
			str[j++] = str[i];
	}
	str[j] = '\0';
}
