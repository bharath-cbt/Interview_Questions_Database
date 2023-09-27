#include<stdio.h>
extern int i;
int main()
{
i =10;
	{
	int i =20;
		{
		const volatile unsigned i =30;
		printf("%d",i);
		}
	printf("%d",i);
}
printf("%d",i);
}

/*
a. 20
b. Compile error
c. 30
d. none
*/


