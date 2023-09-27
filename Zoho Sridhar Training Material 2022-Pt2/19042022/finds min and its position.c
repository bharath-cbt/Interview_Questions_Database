#include "arrcommon.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{//              00  01  02  03  04  05  06  07  08  09  10  11  12  13  14  15
    int arr[] = {45, 12, 78, 89, 33, 90, 11, 18, 78, 23, 16, 19, 99, 34, 67, 55 };
    int arr_size;
    int arr_ind;
    int smallest;
    int smallest_pos;
    int scope_begin;
    arr_size = size(arr);
        printArray(arr, arr_size);

    scope_begin = 0;
    smallest = arr[ scope_begin ];
    smallest_pos = scope_begin;
    for(arr_ind = scope_begin + 1; arr_ind < arr_size ; arr_ind += 1)
    {
        if(arr[arr_ind ] < smallest)
        {
            smallest = arr[arr_ind];
            smallest_pos = arr_ind;
        }
    }
    swapArr(arr, scope_begin, smallest_pos);
    printArray(arr, arr_size);


    return EXIT_SUCCESS;
}
