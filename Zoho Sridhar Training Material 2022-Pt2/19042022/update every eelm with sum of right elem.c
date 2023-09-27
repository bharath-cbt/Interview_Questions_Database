/*
6   1  2  7  4  9
23 22 20 13  9  0

*/
#include<stdio.h>
#include<stdlib.h>
#include "arrcommon.h"
int main()
{
    int arr[] = {6,1,2,7,4,9};
    int arr_size;
    int arr_ind;
    int sum;
    arr_size = size(arr);
    printArray(arr, arr_size);
    for(sum=0, arr_ind = 0; arr_ind < arr_size; arr_ind += 1)
    {
        sum += arr[arr_ind];
    }
    for(arr_ind = 0; arr_ind < arr_size ; arr_ind+=1)
    {
        arr[arr_ind ] = sum - arr[arr_ind];
        sum = arr[arr_ind];
    }
    printArray(arr, arr_size);

    return EXIT_SUCCESS;
}
