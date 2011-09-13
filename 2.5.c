/*

 After an hour of work, it looks like I need to give up on full implementation 
 of the trie structure.

*/
#include "inc.c" // really bothers me that this isn't inc.h
		 // but too many exercises still have it as .c
#define TRIE void*
#define TRIESIZE sizeof(TRIE)*256
long any(char searched[], char* sought[]);
TRIE createPopulatedTrie(char* sought[]);
void populateTrie(TRIE trie, char* sought);
TRIE newTrie();


MAIN {
	char* a1[1];
	char* arr[3] = {"abc", "def"};
	//arr[2]=(char *)arr;
	char** a2   = (char**)malloc(sizeof(a1)*256);
	a2[0]=arr;
	arr[3] = a2;
//	any(NULL, arr);
}

long any(char searched[], char* sought[])
{
	TRIE trie = createPopulatedTrie(sought);
	
}

/*

        [2]->[5]->*
t->[0]->[3]->*
   [1]  [4]->*
    |
    ` ->*
*/

TRIE createPopulatedTrie(char* sought[])
{
	int i = 0;
	TRIE trie = newTrie();
	for(i; i < 4; i++)
	{
		populateTrie(trie, sought[i]);
		printf("\n");
	}
	return trie;
}

void populateTrie(TRIE trie, char* sought)
{
	int i;
	int * pntr;
	for(i = 0; sought[i] != '\0'; i++)
	{
	//	trie
	}
}

TRIE newTrie()
{
	TRIE chars = (TRIE)malloc(TRIESIZE);
	return chars;
}


