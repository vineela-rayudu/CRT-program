/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,x1=0,x2=1,x,i;
    scanf("%d",&n);
    printf("%d%d",x1,x2);
    i=1;
    do
    {
        x=x1+x2;
        printf("%d",x);
        x1=x2;
        i++;
    }
    while(i<=n-2);
    return 0;
}
