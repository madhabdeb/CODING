#include <stdio.h>
void main ()
{
    int a,b,c,d,n;
    char m[5][10];
    printf ("number=");
    scanf ("%d\n\n",&n);

    for (a=0;a<n;a++)
    {
    gets(m[a]);
    }

    for (a=0;a<n;a++)
    {
    b=strlen(m[a]);
    for (c=0,d=b-1;c<strlen(m[a])/2;c++,d--)
    {
    printf ("%d",(m[a][c]-'0')+(m[a][d]-'0'));
    }
    printf ("\n\n");
    }
}
