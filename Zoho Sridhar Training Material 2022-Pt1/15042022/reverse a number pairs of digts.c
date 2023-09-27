#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int digits;
    int revnum;
    int safe;
    num = 697425;
    safe = num;
    revnum = 0;
    while(num != 0)
    {
        digits = num % 100;
        revnum = revnum * 100 + digits;
        num /= 100;
    }
    num = safe;
    printf("%d %d", num, revnum);
    return EXIT_SUCCESS;
}
