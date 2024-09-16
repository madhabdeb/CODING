#include<stdio.h>
void main()
{
int a,b,d=1,c;
    printf ("Enter a number= ");
    scanf ("%d",&a);
    printf ("Enter the power of the number=");
    scanf ("%d",&b);

  for (c=1;c<=b;c++)
    d=d*a;
    printf("%d",d);
}
