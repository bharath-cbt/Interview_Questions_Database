#include<stdio.h>
int main()
{
  int a,x,y,z=0;
  for(x=0;x<100;x++)
  {
    for(y=x+1;y<5;y++)
    {
      z++;
    }
    a=y;
    while(z>x)
    {
      a=a*z;
      z--;
    }
  }
  printf("%d",a);
}

