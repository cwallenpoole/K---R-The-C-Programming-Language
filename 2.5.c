#include "inc.c" // really bothers me that this isn't inc.h
		 // but too many exercises still have it as .c
#define TRIE void*
#define TRIESIZE sizeof(TRIE) * 256
#define ENDNODE -1

long any(char searched[], char* sought[]);
TRIE createPopulatedTrie(char* sought[]);
void populateTrie(TRIE trie, char* sought, int pos);
TRIE newTrie();


MAIN {
	char* arr[3] = {"abc", "def", "fgh"};
	any(NULL, arr);
}

long any(char searched[], char* sought[])
{
	TRIE trie = createPopulatedTrie(sought);
	
}

TRIE createPopulatedTrie(char* sought[])
{
	int i = 0;
	TRIE trie = newTrie();
	for(i; i < sizeof(sought)/sizeof(char*); i++);
		 populateTrie(trie, sought[i], 0);
	return trie;
}

void populateTrie(TRIE trie, char* sought, int pos)
{
	if(sought[pos] == '\0') 
	{
		sought[pos - 1] = ENDNODE;
		return;
	}
	if(trie[sought[pos]] == NULL)
	{
		trie[sought[pos]] = newTrie();
	}
	populateTrie(&trie[sought[pos]], sought, pos + 1);
}

TRIE newTrie()
{
	TRIE chars = (TRIE)malloc(TRIESIZE);
	if(chars == NULL) return NULL;
	int i;
	for(i = 0; i < 256; i++)
		chars[i] = 0;
	return chars;
}


