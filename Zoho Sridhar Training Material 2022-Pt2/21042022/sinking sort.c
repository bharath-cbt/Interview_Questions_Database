#include<stdio.h>
#include<stdlib.h>
#include "arrcommon.h"
#define NOSWAP 0
#define SWAPPED 1
int main()
{
    int data [] = {14,18,10,98,89,21,69,16,33,91,87,75,77,67};
    int data_size;
    int data_ind;
    int inner_ind;
    int outer_ind;
    char swap_flag;
    data_size = size(data);
    printArray(data, data_size);
    swap_flag = SWAPPED;
    for(outer_ind = 0; outer_ind < data_size && swap_flag == SWAPPED; outer_ind+=1)
    {
        swap_flag = NOSWAP;
            for(inner_ind = 0; inner_ind < data_size - (outer_ind+1); inner_ind+=1)
            {
                if(data [inner_ind + 1] < data[ inner_ind])
                {
                    swapArr(data, inner_ind , inner_ind +1);
                    swap_flag = SWAPPED;
                }

            }
                printArray(data, data_size);
    }







  return EXIT_SUCCESS;
}
