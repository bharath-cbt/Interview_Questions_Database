#include<stdio.h>
int fun(int n)
{
    if(n!=0)
    {
       return n-fun(n-5);
    }
    else
    {
    return ;
    }
}
int main()
{
int n=10,z;
z=fun(n);
printf("%d",z);
}
