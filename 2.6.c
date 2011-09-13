#include "inc.c"
unsigned setbits(unsigned int x, int p, int n,unsigned int y);

MAIN{
  // admittedly cheated on this one. Didn't understand question.
  unsigned i;
  unsigned j;
  unsigned k;
  int p;
  int n;
 /* 
  for(i = 0; i < 30000; i += 511)
  {
    for(j = 0; j < 1000; j += 37)
    {
      for(p = 0; p < 16; p++)
      {
        for(n = 1; n <= p + 1; n++)
        {
          k = setbits(i, p, n, j);
          printf("setbits(%u, %d, %d, %u) = %u\t o = %u\n", i, p, n, j, k, 
		// why was this so complicated? Solution below is clearer.
		(i & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((j & ~(~0 << n)) << (p + 1 - n)));
        }
      }
    }
  }
*/
  	printf("%d\n", ~7|~(~7));
  	return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
	int mask = ~(~0<<n);
	int finY = y & mask;
	p++;
	p -= n;
	return (x & ~(mask<<p)) | (finY << p);
}

