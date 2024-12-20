#include <stdio.h>
void main ()
{
int a,s=1;
    scanf ("%d",&a);
    switch(a)
    {
    case 5:
    s*=a--;
    case 4 :
    s=s*a--;
    case 3:
    s=s*a--;
    case 2:
    s=s*a--;
       case 1:
    s=s*a--;
    }
    printf ("%d",s);
}
