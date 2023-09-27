#include<stdio.h>
#include<stdlib.h>
int main()
{
   int * arr;
   int n;
   int ind;
   scanf("%d", &n);
   arr = malloc( n * sizeof (int));

   for(ind = 0; ind < n ; ind+=1)
   {
       arr[ind] = ind + 10;

   }
   for(ind = 0; ind < n ; ind+=1)
   {
       printf("%d ", arr[ind]);

   }




 return EXIT_SUCCESS;
}
