#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int rev_num;
    long long int sqr_num;
    long long int rev_sqr_num;
    long long int sqr_rev_num;
    int safe;
    int digit;
    for(num = 1; num <= 10000000; num+=1)
    {
        if(num % 10 == 0)
            continue;
        rev_num = rev_sqr_num = 0;
        sqr_num = num * num;
        safe = num;
        while(num != 0)
        {
           digit = num % 10;
           rev_num = rev_num * 10 + digit;
           num /= 10;
        }
        num = safe;
        sqr_rev_num = rev_num * rev_num;
        safe = sqr_num;
        while(sqr_num != 0)
        {
           digit = sqr_num % 10;
           rev_sqr_num = rev_sqr_num * 10 + digit;
           sqr_num /= 10;
        }
        sqr_num = safe;
        if(rev_sqr_num == sqr_rev_num)
            printf("%d ", num);
    }




    return EXIT_SUCCESS;
}

