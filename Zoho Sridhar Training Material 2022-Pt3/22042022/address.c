#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num;
   long long int lnum;
   printf("Address of num is %u\n",&num);
   printf("Address of num+1 is %u\n",(&num)+1);

   printf("Address of lnum is %u\n",&lnum);
   printf("Address of lnum+1 is %u\n",(&lnum)+1);
   printf("Address of main() is %u\n", main);
   printf("Address of printf() is %u\n", printf);



  return EXIT_SUCCESS;
}
