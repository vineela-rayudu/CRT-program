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
    int n,r,sum=0;
    scanf("%d",&n);
    do{
        r=n%10;
        if(r%2==0)
        sum=sum+r;
        n=n/10;
    }
    while(n!=0);
    printf("%d",sum);
    return 0;
}
