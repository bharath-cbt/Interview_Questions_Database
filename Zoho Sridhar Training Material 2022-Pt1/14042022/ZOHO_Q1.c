#include<stdio.h>
void main()
{
   int n=11,res=1;
   do
   {
       n-=5;
       res *=5;
   }while(n>5);
   printf("%d",n*res);
}

