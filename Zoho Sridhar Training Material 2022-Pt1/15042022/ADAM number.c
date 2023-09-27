#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int rev_num;
    int sqr_num;
    int rev_sqr_num;
    int sqr_rev_num;
    int safe;
    int digit;
    rev_num = rev_sqr_num = 0;
    num = 331;
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
        printf("%d is an Adam Number", num);
    else
       printf("%d is NOT an Adam Number", num);



    return EXIT_SUCCESS;
}

