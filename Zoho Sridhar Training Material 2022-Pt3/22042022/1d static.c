#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[20];
   int ind;
   for(ind = 0; ind < 20 ; ind+=1)
   {
       arr[ind] = ind + 10;

   }
   for(ind = 0; ind < 20 ; ind+=1)
   {
       printf("%d ", arr[ind]);

   }




 return EXIT_SUCCESS;
}
