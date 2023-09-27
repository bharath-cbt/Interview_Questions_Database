#include<stdio.h>
#include<stdlib.h>
long long int rev(long long int data);

int main()
{
   long long int num;
   long long int rev_num;
   long long int sum;
   long long int rev_sum;
   scanf("%lld", &num);
   do
   {
      rev_num = rev(num);
      sum = num + rev_num;
      rev_sum = rev(sum);
      printf("%lld + %lld = %lld\n", num , rev_num, sum);
      num=sum;

   }while(sum != rev_sum);


return EXIT_SUCCESS;
}


long long int rev(long long int data)
{
   long long int revData;
   long long int copyData;
   for(copyData = data, revData=0; copyData; copyData/=10)
   {

     revData = revData * 10 + (copyData % 10);
   }

  return revData;

}
