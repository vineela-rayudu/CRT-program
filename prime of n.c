/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,flag,j;
	scanf("%d",&n);
	for( i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
		    if(i%j==0)
		    {
		        flag=1;
		        break;
		    }
		}
		if(flag==0)
		printf("%d",i);
	}
	return 0;
}
