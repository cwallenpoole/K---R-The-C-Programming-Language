#include <stdio.h>
#define MAXLINE 1000

int _getline(char s[], int len);
void copy(char to[], char from[]);

int main( int argc, char* argv[] )
{
    int len, max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    while((len = _getline(line, MAXLINE)) > 0)
    {
        if( len > max )
        {
            max = len;
            copy(longest, line);
        }
    }
    if( max > 0 ) printf("%s", longest);
    return 0;
}

int _getline(char s[], int len)
{
    int c, i;
    for(i=0; i < len - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        s[i%len] = c;
    }
    if(c=='\n')
    {
        s[i%len] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}