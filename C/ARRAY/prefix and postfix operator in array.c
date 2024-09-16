#include <stdio.h>
void main ()
{
    int i,j,k=0,p,m,a[5]={5,6,15,14,25};

        m=a[k++];
        p=a[++k];

        j=a[k]++;
        i=++a[k];

            printf ("%d\n%d\n%d\n%d",m,p,j,i);
}
