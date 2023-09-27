#include<stdio.h>
#include<stdlib.h>
int main()
{
   char dim[] = {31,28,31,30,31,30,31,31,30,31,30,31};
   int dim_size;
   int dim_ind;
   dim_size = sizeof dim / sizeof dim[-1];
   for(dim_ind = 0; dim_ind < dim_size; dim_ind+=1)
     printf("%d ", dim[dim_ind]);
   printf("\n\n");
   for(dim_ind = 0; dim_ind < dim_size; dim_ind+=1)
     printf("%u ",  &dim[dim_ind]);
     /* dim + dim_ind [ ]



   return EXIT_SUCCESS;
}
