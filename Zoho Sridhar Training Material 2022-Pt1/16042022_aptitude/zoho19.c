#include<stdio.h>
#include<stdlib.h>
int min(int inp1, int inp2);

int main()
{
    int a[]={-5,9,8,-8,-2};
    int z=-5, i=0, c=-5, n=5;

    for(i=0 ; i<n ; i++)
    {
        c = min(a[i],c + a[i]);
        z = min(z,c);
    }

    printf("%d",z);
    return 0;
}
int min(int x, int y)
{
    return (y<x) ? y:x;
}
