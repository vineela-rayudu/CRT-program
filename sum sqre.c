/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
    #include <stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
	sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}

