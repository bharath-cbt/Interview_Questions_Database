// vishnupriya
#include<stdio.h>
#include<stdlib.h>
#define isUpper(x) ( ( (x) >= 65 && (x) <= 90  ) ? 1 : 0)
#define isLower(x) ( (x) >= (65+32) && (x) <= (90+32) ? 1 : 0)
#define isDigit(x) ( (x) >= ('0') && (x) <= (57) ? 1 : 0)
#define isAlphabet(x) ( isUpper (x) || isLower (x) )


int getOnBits(char ch)
{
    char copy_ch;
    int res;
    for(res = 0, copy_ch = ch; copy_ch ; copy_ch /= 2)
    {
        res += copy_ch % 2;
    }
    return res;
}

int main()
{

    char str [100];
    int str_ind;
    int res;
    scanf("%[^\n]s", str);
    for(str_ind = 0,res=0; str [ str_ind ] ; str_ind+=1)
    {
    if(isAlphabet(str[str_ind])  || isDigit(str[str_ind]))


     // if( (str[str_ind] >= 65 && str [ str_ind ] <= 90)  || (str[str_ind] >= 97 && str [ str_ind ] <= 122) || (str[str_ind] >= '0' && str [ str_ind ] <= '9') )
        {
            res += getOnBits(str [ str_ind]);
      //

        }
    }

printf("%d ", res);
    return EXIT_SUCCESS;
}
