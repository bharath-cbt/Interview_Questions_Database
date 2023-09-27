//Find the output
#include<stdio.h>
int main()
{
int a[] = {1,2,3,4,5,6,7,8,9};
int b[9],i;
for ( i = 0; i < 9 ;i++)
  {
   if (i % 2 == 0 ) b[i] = a[i];
   else b[i] = a[8 - i];
  }
for ( i = 8; i >= 0; i--)
printf("%d ",b[i]);
return 0;
}

/*

*/
