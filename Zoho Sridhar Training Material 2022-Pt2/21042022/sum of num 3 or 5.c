#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   int num;
   long long int sum;
   n = 1000000000;
   sum = 0;
   for(num = 1; num <= n; num+=1)
   {

      if(num % 3  == 0 || num % 5 == 0)
          sum += num;
   }

   printf("%lld", sum);
 return EXIT_SUCCESS;
}
