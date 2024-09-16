#include <stdio.h>
void main()
{
int a,b,c,m=1;
    for (a=1;a<=5;a++)
    {
        for (b=5;b>=a;b--)
        printf ("   ");
            for(c=1;c<=a;c++)
            printf ("      %d",m++);
            printf ("\n\n");
    }
}
