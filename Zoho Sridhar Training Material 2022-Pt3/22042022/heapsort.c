#include<stdio.h>
#include<stdlib.h>
#include"arrcommon.h"
void hs(int data[], int data_size);
void maxHeapify (int arr [], int parent_num, int li);
int main()
{

    int data [] = {5,15,10,25,55,35,75,45,95,50,70,40,60,90,3};
    int data_size;
    data_size = size(data);
    hs(data,data_size);
    printArray(data, data_size);

   return EXIT_SUCCESS;
}
void hs(int data[], int data_size)
{
    int parent;
    int last_index = data_size - 1;
    for(;last_index >= 0; last_index -=1)
    {
        for(parent = data_size / 2; parent >= 0; parent -=1)
        {
            maxHeapify(data, parent, last_index);
        }
    swapArr(data,last_index,0);
    }
}
void maxHeapify (int arr [], int parent_num, int li)
{
    int left;
    int right;
    left = parent_num * 2 + 1;
    right = parent_num * 2 + 2;
    if(left > li) // child node
         return;
    if(left == li)
    {
        if(arr[parent_num ] < arr[left])
            swapArr(arr,parent_num,left);
        return;
    }
    if(arr[left] > arr[parent_num] || arr[right] > arr[parent_num])
    {
        if(arr[left] > arr[right])
        {
            swapArr(arr,left,parent_num);
            maxHeapify(arr, left, li);
        }
        else
        {
            swapArr(arr,right,parent_num);
            maxHeapify(arr, right, li);
        }
    }















}
