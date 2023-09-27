#define size(x) ( sizeof(x) / sizeof(x[0]) )
void printArray(int arr[], int arr_size)
{
    int arr_ind;
    for(arr_ind = 0; arr_ind < arr_size; arr_ind+=1)
        printf("%d ", arr[arr_ind]);

    printf("\n");
}
void printArray_reverse(int arr[], int arr_size)
{
    int arr_ind;
    for(arr_ind = arr_size-1; arr_ind >= 0; arr_ind -= 1)
        printf("%d ", arr[arr_ind]);

    printf("\n");
}



void swapArr(int arr[], int pos1, int pos2)
{
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr  [pos2] = temp;
}






















