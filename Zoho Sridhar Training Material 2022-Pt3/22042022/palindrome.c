#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[] = "notoddoreven";
    int last;
    int first;
    for(first = 0,   last = strlen(str)-1; first < last; first+=1, last-=1)
        if(str[first] != str[last])
        break;
    if(first == last)
        printf("Palindrome");
    else
        printf("Not");



    return EXIT_SUCCESS;
}
