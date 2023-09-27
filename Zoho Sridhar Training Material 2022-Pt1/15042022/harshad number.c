#include<stdio.h>

#include<stdlib.h>

int main()
{

    int num;
    int sod;
    int digit;
    int safe;
    num=13509;
    sod = 0;
    safe = num;
    while(num!=0)
    {
        digit = num % 10;
        sod += digit;
        num /= 10;
    }
    num = safe;
    if(num % sod == 0)
        printf("%d is a Harshad number", num);
    else
        printf("%d is NOT a Harshad number", num);




    return EXIT_SUCCESS;
}
