#include<stdio.h>
enum SWITCH{off,on};
int main()
{
    enum SWITCH s= on;
    printf("size of enumeration %d \n", sizeof(enum SWITCH));
    printf("size of object s is %d \n",sizeof(s));
    return 0;
}

