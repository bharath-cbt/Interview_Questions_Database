#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int power;
    num = 61065;
    power = 1;


    while( (num/power) > 9)
    {
        power = power * 10;
    }

    printf("%d %d %d %d", num, num/power, num %power, power);



    return EXIT_SUCCESS;
}
