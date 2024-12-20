#include <stdio.h>
void main ()
{
int a,n,b;
    scanf ("%d\n",&n);
    char s[5][30];
        for (a=0;a<n;a++)
        gets(s[a]);
        for (a=0;a<n;a++)
            for (b=0;s[a][b]!='\0';b++)
            printf ("%c   ",s[a][b]);

        //puts(s[a]);


}
