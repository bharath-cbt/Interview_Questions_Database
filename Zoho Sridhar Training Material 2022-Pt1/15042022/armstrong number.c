#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int nod;
    int safe;
    int digit;
    int raised_digit;
    int ctr;
    int sum;

    num = 1643;
    nod = 0;
    sum = 0;
    // find the number of digits

    safe = num;

    while(num != 0)
    {
        num /=10;
        nod += 1;
    }
    num = safe;

    while(num != 0)
    {
        digit = num % 10;
        for(raised_digit =1, ctr = 0; ctr < nod; ctr +=1 )
        {
            raised_digit *= digit;
        }
        sum += raised_digit;
        num /= 10;
    }
    num = safe;
    if(num == sum)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is NOT an Armstrong number", num);
    return EXIT_SUCCESS;
}
