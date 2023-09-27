#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   int num3;
   int num5;
   int num15;
   long long int sum3;
   long long int sum5;
   long long int sum15;
   long long int sum;
   n = 1000000000;
   num3 = n / 3;
   sum3 = 3 * ((num3) * (num3+1LL))/2;
  // printf("%d\n\n\n", sum3);
   num5= n / 5;
   sum5 = 5 * ((num5) * (num5+1LL))/2;
 //  printf("%d\n\n\n", sum5);
     num15= n / 15;
   sum15 = 15 * ((num15) * (num15+1LL))/2;
   sum = (sum3 + sum5) - sum15;
   printf("%lld", sum);
 return EXIT_SUCCESS;
}
