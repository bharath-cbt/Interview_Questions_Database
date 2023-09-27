#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int digit;
    int revnum;
    int safe;

    num = 69742;
    safe = num;
    revnum = 0;
    while(num != 0)
    {
        digit = num % 10;
        revnum = revnum * 10 + digit;
        num /= 10;
    }
    num = safe;
    printf("%d %d", num, revnum);



    return EXIT_SUCCESS;
}
