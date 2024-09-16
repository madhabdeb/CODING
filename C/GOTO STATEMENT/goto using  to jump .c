#include <stdio.h>
void main ()
{
    if (0)
    goto AAA ;
    else
    goto EEE;

    AAA:
    printf ("YES");

    EEE:
    printf ("NO");
}
