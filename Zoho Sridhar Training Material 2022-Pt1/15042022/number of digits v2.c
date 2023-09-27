#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int power;
    int nod;

    num = 782356;
    power = 1;
    nod = 0;

    while ( (num / power) > 0)
    {
     //   printf("%d / %d = %d\n",num , power , num / power);
        power *= 10;
        nod += 1;
    }
    printf("%d %d", num, nod);

    return EXIT_SUCCESS;
}
