#include <stdio.h>
#include <stdlib.h>
// test
void cp(char* in, char* out);
void incrementSize(char** in,int size);
int main(int argc, char* argv[])
{
	char* in = (char*)malloc(sizeof(char)*6);
	char* t  = "in";
	cp(t, in);
	printf("%s\n", in);
	incrementSize(&in,3);
	in[2]=65;
	in[3]=67;
	in[4]='\0';
	printf("%s\n", in);
}

void incrementSize(char** in,int size)
{
	int i = 0;
	char* str = *(in);
	while(str[i]!='\0') i++;
	char* out = (char *)malloc(sizeof(char) * (i + size));
	if(out == NULL)
	{
		printf("Could not allocate memory!");
		exit(1);
	}
	cp(*in,out);
	free(*in);
	*in = out;	
}

void cp(char* in, char* out)
{
	while(*(in))
	{
		*(out++) = *(in++);
	}
}
