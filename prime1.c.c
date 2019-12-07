/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
    #include <stdio.h>
int main()
{
	int i,n,flag=0;
	scanf("%d",&n);
	for( i=2;i<=n/2;i++)
	{
	if (n%i==0)
	{
	    flag=1;
	    break;
	}
	}
	if (flag==0)
	printf("prime");
	else
	printf("not a prime");
	return 0;
}

