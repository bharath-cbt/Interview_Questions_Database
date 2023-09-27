//Value of c after the following expression(initializations a=1,b=2,c=1)
//c+=(-c)?a:b
#include<stdio.h>
int main()
{
   int a = 10 , b = 2 , c = 1;
   c += (-c) ? a:b;
   // c += (-1)
   printf("%d",c);
}

























//OUTPUT : 2
