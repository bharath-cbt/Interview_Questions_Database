#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 100000000
int numbers[SIZE];
int main()
{
   int multiples;
   int prime;
   int until;
   int ind;
   int primeCtr;
   primeCtr=0;
   numbers[0] = numbers[1] = 1;
   until = sqrt(SIZE);
   for( prime = 2; prime <= until ; prime+=1)
   {
      if(numbers[ prime ] == 1)
         continue;
      for(multiples = prime * prime; multiples < SIZE; multiples += prime)
         numbers[multiples] = 1;
   }
   for(ind = 0; ind < SIZE; ind+=1)
   {
      if(numbers[ind] == 0)
         primeCtr+=1;
   }
   printf("%d", primeCtr);
   return EXIT_SUCCESS;
}
