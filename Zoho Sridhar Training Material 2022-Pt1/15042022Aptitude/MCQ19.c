#include<stdio.h>
main()
{
 extern int i;
 {
  int i=20;

  printf("%d",i);
 }
 printf("%d",i);
printf("%d",i);
}
int i=10;
