#include<stdio.h>
int main()
{
   int b = 754897;
   int a = 0;
   while(b > 0)
   {
      a = a+(b%10);
      b = b/10;
   };
   printf("%d",a);

}

