#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[] = {6,1,9,2,4,7};
    int arr_size;
    int arr_ind;
    arr_size = sizeof arr / sizeof arr[-1];
    for(arr_ind = 0; arr_ind < arr_size ; arr_ind+=1)
        printf("%d ", arr[arr_ind]);
        printf("\n\n\n");
   for(arr_ind = 0; arr_ind < arr_size ; arr_ind+=1)
        printf("%d ", arr_ind[arr]);
        printf("\n\n\n");
   for(arr_ind = 0; arr_ind < arr_size ; arr_ind+=1)
        printf("%d ", *(arr + arr_ind) ) ;




    return EXIT_SUCCESS;
}
