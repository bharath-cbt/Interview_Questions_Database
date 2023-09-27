#include<stdio.h>
#include<stdlib.h>
#include"arrcommon.h"
int main()
{
 //   int data[] = {10,20,30,40,50,60,70,80,90,42,24,15,6,67,24,66,79};
    int data [] = {35, 18, 78, 10, 33, 24, 42, 60, 10 ,15, 24, 42, 51, 15, 90, 72, 65};
    int data_size;
    int data_ind;
    int poi;
    int uns;
    int shifter;
    int safe;
    data_size = size(data);
    printArray(data, data_size);
    for(uns = 1; uns < data_size ; uns+=1)
    {
    for(poi = 0; data[uns] > data[poi]; poi+=1);
    safe = data[uns];
    for(shifter = uns - 1; shifter >= poi; shifter -= 1)
        data[shifter + 1] = data [ shifter ];
    data [ poi ] = safe;
    }
    printArray(data, data_size);














    return EXIT_SUCCESS;
}
