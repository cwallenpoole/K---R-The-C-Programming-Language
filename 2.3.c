#include "inc.c"

long convertBase(char str[]);
int charToBase(char test, int base);
MAIN{
	char bin[8] = "0b11111\0";
	printf("bin => %ld\n", convertBase(bin));
	char oct[4] = "037\0";
	printf("oct => %ld\n", convertBase(oct));
	char ten[3] = "31\0";
	printf("dec => %ld\n", convertBase(ten));
	char hex[5] = "0x1F\0";
	printf("hx1 => %ld\n", convertBase(hex));
	char hx2[5] = "0X1f\0";
	printf("hx2 => %ld\n", convertBase(hx2));
}


int charToBase(char test, int base)
{
	int ret = -1;
	// this is a digit. Just return it.
	if(test < 58 && test > 47 )
		ret = test - '0';
	// this is a case-insensitive base
	else if(base < 36)
		ret = toupper(test) + 10 - 'A';
	// case sensitive
	else
		if(test <= 'Z' && test >= 'A' )
			ret =  10 + test - 'A';
		else if(test >= 'a' && test <= 'z')
			ret =  36 + test - 'a';
		else if(test == '-')
			ret =  62;
		else if(test == '+')
			ret =  63;
	return (ret < base)?ret:-1;
}

long convertBase(char str[])
{
	int i = 0;
	int base = 10;
	long result = 0L;
	if(str[i++] == '0')
	{
		switch(str[i++])
		{
			case 'B':
			case 'b':
				base = 2;
				break;
			case 'X':
			case 'x':
				base = 16;
				break;
			default:
				if(isdigit(str[i]))
				{
					base = 8;	
				}
				i--;
				break;
		}
	}	
	else
	{
		i--;
	}
	for(i; str[i] != '\0'; i++)
	{
		result *= base;
		result += charToBase(str[i],base);
	}
	return result;
}
