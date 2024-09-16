#include <stdio.h>

 //int i,j,k;

void a()
{
    auto int i=0;
    register int j=0;
    static int k=0;
    i++;
    j++;
    k++;
        printf ("\n\n%d %d %d ",i,j,k);
}
void main ()
{
    a();
    a();
}
