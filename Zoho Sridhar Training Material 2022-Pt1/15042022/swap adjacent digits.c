#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int digits;
    int revnum;
    int safe;
    int power;
    int d1;
    int d2;

    num = 12345600;
    power = 1;
    revnum = 0;
    safe = num;
    while( (num / power) > 99)
    {
        power *= 10;
    }
     while(power != 0)
    {
        digits = num / power;
        d1 = digits / 10;
        d2 = digits % 10;
        digits = d2 * 10 + d1;
        revnum = revnum * 100 + digits;
        num = num % power;
        power /=100;
    }
    num = safe;
    printf("%d %d", num, revnum);


    return EXIT_SUCCESS;
}
