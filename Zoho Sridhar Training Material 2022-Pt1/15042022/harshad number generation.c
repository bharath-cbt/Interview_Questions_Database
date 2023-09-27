#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int sod;
    int digit;
    int safe;
    int N;
    N=1000;
    for(num=1; num <= N; num+=1)
    {
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
            printf("%d ", num);

    }




    return EXIT_SUCCESS;
}
