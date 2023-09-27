#include<stdio.h>
void main()
{
 char * s="125s\n";
 printf("%d",sizeof(s));
 //returns the size of the pointer and not related to the size of the string
}
