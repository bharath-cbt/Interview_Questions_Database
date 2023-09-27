#include<stdio.h>
int main()
{
int x=3,z;
z=x/++x;
printf("x=%d z=%d\n",x,z);
return 0;
}
