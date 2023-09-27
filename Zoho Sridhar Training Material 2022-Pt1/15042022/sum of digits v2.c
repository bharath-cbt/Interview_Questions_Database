#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int digit;
    int power;
    int sod;

    num = 6974;
    power = 1;
    sod = 0;
    while( num/power > 0)
    {
        digit = (num/power) % 10;
        sod += digit;
        power *= 10;
    }
    printf("%d %d", num, sod);

    return EXIT_SUCCESS;
}
