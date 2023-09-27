#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int digit;
    int sod;
    int copy_num;
    num = 6974;
    sod = 0;
    copy_num = num;
    while(copy_num != 0)
    {
        digit = copy_num % 10;
        sod += digit;
        copy_num /= 10;
    }
    printf("%d %d", num, sod);

    return EXIT_SUCCESS;
}
