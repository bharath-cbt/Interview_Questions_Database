#include<stdio.h>
#include<stdlib.h>
int nod (int num);
int power10(int expo);
int rev(int data);
int main()
{
    printf("%d", rev(18004567) );
    return EXIT_SUCCESS;
}
int rev(int data)
{
    if(data == 0) return 0;
    return ( (data % 10 ) * power10(nod(data/10)) ) + rev (data / 10);
}

int power10(int expo)
{
    if(expo == 0) return 1;
    return 10 * power10(expo-1);
}

int nod (int num)
{
    if (num == 0) return 0;
    return 1 + nod(num / 10);
}










