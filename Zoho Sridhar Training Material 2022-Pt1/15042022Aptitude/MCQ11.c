#include<stdio.h>
int main()
{
    char *p;
    p = "%d\n";
    printf("%s",p);
    p++;
    printf("%s",p);
    p++;
    printf("%s",p);
    p-=2;
    printf("%s",p);
    printf(p, 300);
}
