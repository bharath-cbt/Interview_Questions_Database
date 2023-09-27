#include<stdio.h>
#include<stdlib.h>
int main()
{
   int dim[] = {31,28,31,30,31,30,31,31,30,31,30,31};
   int dim_size;
   int dim_ind;
   dim_size = sizeof dim / sizeof dim[100];
   printf("name of array - dim %u\n", dim);
   printf("name of array+1 - dim+1 %u\n", dim+1);
   printf("&name of array - &dim %u\n", &dim);
   printf("&name of array+1 - &dim+1 %u\n", &dim+1);




   return EXIT_SUCCESS;
}
