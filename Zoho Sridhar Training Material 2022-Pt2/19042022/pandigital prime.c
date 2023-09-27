#include<stdio.h>
#include<stdlib.h>
int isPrime(long long int);
int isPANDigital(long long int);
int main()
{
long long int data;
if(isPrime(10123465897) == 1 && isPANDigital( 10123465897) == 1)
    printf("Prime and PAN Digital");

return EXIT_SUCCESS;
}

int isPrime(long long int data)
{
 if(data == 0 || data == 1) return 0;
 if(data == 2 || data == 3 ) return 1;
 if(data % 2 == 0 || data % 3 == 0) return 0;
 int check_factor;
 int until;
 until = sqrt(data);
 for(check_factor = 5 ;  check_factor <= until ; check_factor += 6)
 {
     if(data % check_factor == 0 || data % (check_factor + 2) == 0)
        return 0;
 }
 return 1;
}
int isPANDigital(long long int data)
{
    int flags[10] = {0};
    int flags_ind;
    long long int copy_data;
    int digit;
    copy_data = data;
    while(copy_data)
    {
    digit = copy_data % 10;
    flags[digit] += 1;
    copy_data /= 10;
    }
    for(flags_ind = 0;flags_ind < 10; flags_ind += 1)
        if(flags[flags_ind] == 0)
           return 0;



    return 1;





}

