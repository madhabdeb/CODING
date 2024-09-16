#include <stdio.h>
void main()
{
int a,b,c;
    printf ("Enter  3 sides of triangle\n\n");
    scanf ("%d %d %d",&a,&b,&c);
    if (a+b>c||b+c>a||c+a>b)
    printf ("valid");
    else
    printf ("not valid");

}
