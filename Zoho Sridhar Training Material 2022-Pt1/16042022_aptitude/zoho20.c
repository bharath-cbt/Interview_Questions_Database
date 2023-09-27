#include<stdio.h>
int fun(int);
int main()
{
    int n=10, z;
    z = fun(n);
    printf("%d",z);
    return 0;
}
int fun(int n)
{
  return fun(n)-fun(n-5);
}
