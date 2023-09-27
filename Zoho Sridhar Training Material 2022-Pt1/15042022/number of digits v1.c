#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int nod;
    int safe;
    num = 678932;
    nod = 0;
    safe = num;
    while(num != 0) // while(num)
    {
        num /= 10;
        nod += 1;
    }
    num = safe;
    printf("%d %d", num, nod);



    return EXIT_SUCCESS;
}
