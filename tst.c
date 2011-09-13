#include<stdio.h>

int main()
{
    struct s{
      int bit_fld:3;
    };
    struct s a={3};
    printf("%x\n",a.bit_fld);
    a.bit_fld=0x10;
    printf("%x\n",a.bit_fld);
    a.bit_fld =( a.bit_fld | (1<<2));
    printf("%x\n",a.bit_fld);
    return 0;
}
