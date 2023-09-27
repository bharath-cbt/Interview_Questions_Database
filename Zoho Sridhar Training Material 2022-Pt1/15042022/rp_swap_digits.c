#include<stdio.h>
#include<stdlib.h>

int main(){
int sum=0;
int num;
scanf("%d",&num);
while(num>0){
    sum*=100;
    int digit=num%100;
    sum+=((digit%10)*10)+digit/10;
    num/=100;
}
printf("%d",sum);
return 0;
}
