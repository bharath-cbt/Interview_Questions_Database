#include<stdio.h>
void main()
{
 static int i=3;
 printf("%d",i--);
 return i>0 ? main():0;
}

