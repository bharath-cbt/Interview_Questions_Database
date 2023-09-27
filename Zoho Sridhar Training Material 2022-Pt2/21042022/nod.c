#include<stdio.h>
#include<stdlib.h>
int nod(int data);
int main()
{
    printf("%d", nod(1234567890) );
    return EXIT_SUCCESS;
}
int nod(int data)
{
    if(data == 0) return 0;
    return 1 + nod(data / 10);
}
