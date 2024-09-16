#include <stdio.h>
void main ()
{
    int z=1;
    ma:
       printf ("%d\n",z==3?0:z);  //very imp
    if (z++<10)
        goto ma;

}
