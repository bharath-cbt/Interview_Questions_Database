#include<stdio.h>
char convert(char z)
{
 return z-32;
}
int main()
{
 char c='s',x;
 if((c>='a') && (c<='z'))
   x=convert(c);
 printf("%c",x);
 return 0;
}
