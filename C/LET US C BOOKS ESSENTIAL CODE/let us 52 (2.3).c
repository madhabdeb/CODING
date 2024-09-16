#include<stdio.h>
void main ()
{
int a,b,d;
    scanf("%d %d",&a,&b);
    d=a*b;
    if (d>1000)
    {
     d=d-d/10;
     //printf ("total expence=%d",total );
    }

    printf("total expence=%d",d);






}
