#include <stdio.h>
int main()
{
	int a=100,b=300,c=8900,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("biggestno is:%d",d);
	return 0;
	}
