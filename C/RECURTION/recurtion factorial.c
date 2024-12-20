#include <stdio.h>

factorial(int);
void main ()
{
    int a,n;
    scanf ("%d",&n);
    a=factorial(n);
    printf ("%d",a);
}
int factorial(int a)
{
    if (a==1)
    return 1;
    else
    return(a*factorial(a-1));
}
