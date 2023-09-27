#include<stdio.h>
 int a(unsigned int i)
{
    if( i <= 1)
    {
        return 1;
    }
    return i * a(i - 1);
}

int main()
{
    int i = 5;
    printf("%d", a(i));
    return 0;
}
