#include <stdio.h>
void main ()
{
    int a,b,s=1;
    a=b=0;
    char ch;
    scanf ("%c",&ch);
    switch(ch)
    {
    case 'A':
    case 'a':
        a++;
        break;

    case 'B':
    case 'b':
        b++;
        break;

    }
    printf ("%d",a);
}
