#include<stdio.h>
#include<stdlib.h>


int main()
{

    long long int num;
    long long int pf;
    num =9007199254740991;
    for(pf = 2; pf * pf <= num;pf+=1)
    {
        while(num % pf == 0)
        {
            printf("%lld ", pf);
            num /= pf;
        }

    }
   if(num != 1)
    printf("%lld", num);


    return EXIT_SUCCESS;
}
