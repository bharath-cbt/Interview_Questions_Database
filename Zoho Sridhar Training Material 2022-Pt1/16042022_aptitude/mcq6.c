#include<stdio.h>
int main()
{
    int x,y,z,r;
    x=y=z=1;
    r = (++x || ++y) &&	++z;
    printf("x=%d y=%d z=%d r=%d\nn",x,y,z,r);
    return 0;
}
