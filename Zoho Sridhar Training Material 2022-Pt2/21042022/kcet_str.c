#include<stdio.h>
#include<stdlib.h>
#define isUpper(x) ( (x) >= 65 && (x) <= 90 ? 1 : 0)
#define isLower(x) ( (x) >= 65+32 && (x) <= 90+32 ? 1 : 0)
#define isAlphabet (x) ( isLower(x) || isUpper(x))

int strlen(const char str[]);
char * strcpy(char [], const char src[]);
char * strrev(char str [] );
char * strupr(char str []);
char * strlwr(char str [] );
int strcmp(const char s1[], const char s2[]);
char *strcat(char des[], const char src[]);
int main()
{
    char college[100] = "Kamarajar College of Engineering and Technology";
    char copy_college[100];

    printf("%d\n\n", strlen(college));
    strcpy(copy_college, college);
    printf("%s\n%s", college, copy_college);
    printf("\n%s\n", strupr(strrev(college)));

    char myname [100] = "Sridhar ";
    char mydad [ 100 ] ="Arumugasamy";
    printf("%s", strcat(myname, mydad));

     return EXIT_SUCCESS;
}

int strlen(const char str[])
{
    int str_ind;
    for(str_ind = 0; str[str_ind]; str_ind+=1);
    return str_ind;
}
char * strcpy(char des [], const char src[])
{
    int ind;
    for( ind = 0; src [ ind ] ; ind += 1)
    {
         des [ind ] = src [ind];
    }
        des [ind ] = src[ind];
   return des;
}

char * strrev(char str [] )
{
    int first;
    int last;
    char temp;
    for(first = 0, last = strlen(str) -1; first < last; first+=1, last-=1)
    {
        temp =str [ first ];
        str [ first ] = str [ last ];
        str [ last ] = temp;
    }
    return str;
}



char * strupr(char str [])
{
    int ind;
    for(ind = 0; str[ind] ; ind += 1)
    {
        if(isLower(str[ind]) )
            str[ind] -= 32;
    }
    return str;
}
char * strlwr(char str [] )
{
    int ind;
    for(ind = 0; str[ind] ; ind += 1)
    {
        if(isUpper(str[ind]) )
            str[ind] += 32;
    }
    return str;
}




int strcmp(const char s1[], const char s2[])
{
    int ind;
    for(ind = 0; s1[ind] && s2[ind] && s1[ind] == s2[ind] ; ind+=1);
    return s1[ind] - s2[ind];
}

char *strcat(char des[], const char src[])
{
    strcpy(des + strlen(des) , src);
    return des;
}











