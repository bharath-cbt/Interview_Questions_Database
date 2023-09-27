//Find the Output
#include<stdio.h>
#define THIS 0x01
#define THAT 0x02
int main()
{
unsigned char va = 0x00;
va |= THIS;
printf("va |= THIS and va has become %d\n", va);

va |= THAT;
printf("va |= THAT and va has become %d\n", va);

if (va == THIS & THAT)
   printf("oh %d",THAT);
if (va & THAT >>1)
    printf("%d",THIS);
return 0;
}



