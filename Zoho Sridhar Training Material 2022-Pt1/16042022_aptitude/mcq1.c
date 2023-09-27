#include<stdio.h>
int main()
{
    int a=0,b=0;
    if(a++&&b++)
    printf("excellent");
    else
    printf("great");
    printf("\n%d %d",a,b);
    return 0;
}
