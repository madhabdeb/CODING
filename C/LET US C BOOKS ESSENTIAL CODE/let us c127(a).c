#include <stdio.h>
void main ()
{
int a,b,c=0,f,d[10];
     for (b=1;b<11;b++){
    printf ("\n\nEnter  Over time of employee number (%d) =",b);
    scanf ("%d",&d[b]);
         c=c+d[b];
    printf ("\t\t\t\t\t\tover receive=%d",d[b]*12);
      f=c*12;
     }
    printf( "\n\ntotal Over time pay of 10 empiloyees=%d",f);
}


