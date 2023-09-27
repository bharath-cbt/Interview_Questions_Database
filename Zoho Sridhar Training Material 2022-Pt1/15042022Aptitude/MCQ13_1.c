#include<stdio.h>
main()
{
 int i=_l_abc(10);
 printf("%d\n",--i);
}
int _l_abc(int i)
{
return(i++);
}
