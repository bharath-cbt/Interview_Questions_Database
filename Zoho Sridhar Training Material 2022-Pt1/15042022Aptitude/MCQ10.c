#include<stdio.h>
int main()
{
    int a[5] = {0x00, 0x01, 0x02, 0x03, 0x04}, i;
    i = 4;
    while( a[i])
    {
       printf("%04d  ", *a + i);
        --i;
    }
    return 0;
}
