#include<stdio.h>
void main()
{
 int i;
char a[20]="String";
char *p = "New String";
char *temp;
temp=a;
temp=malloc(strlen(p)+1);
strcpy(a,p);
p=malloc(strlen(temp)+1);
strcpy(p,temp);
printf("(%s,%s)",a,p);
free(p);
free(a);
}
/*
a.swap contents of p & a and print: New string, String
b.Generate compilation error in line number 8
c.Generate compilation error in line number 9
d.Generate compilation error in line number 11
e.Generate compilation error in line number 12
*/
