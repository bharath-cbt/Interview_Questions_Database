#include<stdio.h>
int main()
{
    char *p = "phone";
    p++;
    char c = (*p);
    ++c;
    p--;
    printf("%c%s",c,p++);
    return 0;
}
