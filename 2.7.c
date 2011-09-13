#include "inc.c"
unsigned invert(unsigned x, int p, int n);

MAIN{

}


unsigned invert(unsigned x, int p, int n)
{
	// mask is the compliment of the compliment
	// shifted n times.
	int mask = ~(~0<<n)<<p;
	return (x ^ mask);
}
