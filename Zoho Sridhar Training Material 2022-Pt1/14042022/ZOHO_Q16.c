#include<stdio.h>
int m=0;
int find(int j)
{
   if(j>1)
   {
      j = find(j/10)-(j%10);
      m+=j;
   }
   else
   {
     j = 0;
   }
   return j;
}
int main()
{
   int i = 8090;
   int k;
   k = find(i);
   printf("%d",m);
}

