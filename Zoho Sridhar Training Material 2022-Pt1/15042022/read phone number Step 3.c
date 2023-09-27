#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int num;
    long long int power;
    int digit;
    num = 9442612300;
    power = 1;


    while( (num/power) > 9)
    {
        power = power * 10;
    }

  //  printf("%d %d %d %d", num, num/power, num %power, power);
    while(power > 0)
    {
        digit = num / power;
        switch ( digit )
        {
            case 0 : printf("Zero "); break;
            case 1 : printf("One "); break;
            case 2 : printf("Two "); break;
            case 3 : printf("Three "); break;
            case 4 : printf("Four "); break;
            case 5 : printf("Five "); break;
            case 6 : printf("Six "); break;
            case 7 : printf("Seven "); break;
            case 8 : printf("Eight "); break;
            case 9 : printf("Nine "); break;
        }
        num = num % power;
        power /= 10;
    }
    return EXIT_SUCCESS;
}
