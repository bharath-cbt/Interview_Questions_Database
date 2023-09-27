#include<stdio.h>
void main()
{
   int a=11, b=12, c=13, d=14;
   do
   {
      if(a%2 == 0)
      {
        d = --c * ++b;
      }
      if(a%2 == 1)
      {
        d = c * --b;
      }
   }while(c>20);
   printf("%d,%d,%d,%d",a,b,d,c);
}
//11,11,143,13
