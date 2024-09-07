#include <stdio.h>
void main ()
{
    int a,b,c,m,d,e;
        printf ("enter 1st and  2nd number= ");
        scanf ("%d  %d",&a,&b);
            d=a;
            e=b;
        for (c=1;c<=10;c++)
        {
            printf ("%d\t",a);
               m=b;
               b=b+a;
               a=m;
        }

            printf ("\nupto 100\n");

        while(d<=100)
             {
             printf ("%d\t",d);
               m=e;
               e=e+d;
               d=m;
             }

}
