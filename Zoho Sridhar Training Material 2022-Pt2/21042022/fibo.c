#include<stdio.h>
#include<stdlib.h>
long long int fibo(int n);
int main()
{
    printf("%lld", fibo(80));
   return EXIT_SUCCESS;
}

long long int fibo(int n)
{
  if(n==0) return 0L;
  if(n == 1) return 1L;
  return fibo(n-1) + fibo(n-2);
}
