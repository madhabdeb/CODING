#include <stdio.h>
void main ()
{
    int m[30],k[100],a,g;
        printf ("size=");
        scanf ("%d",&g);
        for (a=0; a<g; a++)
        {
            scanf ("%d",&m[a]);

        }
        for (a=0; a<100; a++)
        {
            k[a]=0;
        }
        for (a=0; a<g; a++)
        {
            k[m[a]]++;
        }
        printf ("\n\n");

        for(a=0; a<100; a++)
        {
        //printf ("%d    =  \n",k[]);
        if(k[a]==0)
            continue;
        printf ("%d\n",k[a]);
        }

        //sorting to out put one //
}
