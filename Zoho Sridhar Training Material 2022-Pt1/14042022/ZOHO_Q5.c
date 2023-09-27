#include <stdio.h>

int main()
{
static int sd;
int j;
for( j=0; j <= 5; j+=2)
 switch (j)
 {
   case 1:
     sd++;
     break;
   case 2:
     sd +=2;
   case 4:
     sd %=2;
     j=-1;
     continue;
   default:
     --sd;
     continue;
 }
printf("%d",sd);
return 0;
}



