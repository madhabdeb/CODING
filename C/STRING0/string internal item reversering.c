#include <stdio.h>
void main ()
{
    int a,n,c;
    char m[10][30],b[30];
    printf ("number=");
    scanf ("%d",&n);

        for (a=0;a<n;a++)
            scanf ("%s",m[a]);

        for (a=0,c=n-1;a<n/2;a++,c--)
        {
            strcpy(b,m[a]);
            strcpy(m[a],m[c]);
            strcpy(m[c],b);

        }
        printf ("\n\n");
        for (a=0;a<n;a++)
            printf ("\n%s",m[a]);

}
