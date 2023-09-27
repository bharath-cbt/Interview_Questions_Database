#include <stdio.h>
int main()
{
    unsigned char c = (int) 0.13;
    for(;c++;printf("%d",c));
    printf("%d",c);
    return 0;
}
