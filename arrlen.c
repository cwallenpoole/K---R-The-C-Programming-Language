#include <stdio.h>
int * getarr();
int main(int argc, char* argv)
{
    int i;
    int * arr = getarr();
    int other = 0;
    printf("%d\n", sizeof(arr));
    printf("%d\n", arr[5]);
    for(i = 0; i < 12; i++)
    {
        printf("i %d: arr %d: *arr %d: s %d\n", i, arr,*(arr++),sizeof(*(arr)));
    }
    printf("%d\n", arr);
}

int* getarr()
{
    static int i[4] = {0,1,0,3};
    return i;
} 
