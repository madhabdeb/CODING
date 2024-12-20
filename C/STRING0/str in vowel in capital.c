#include <stdio.h>
void main()
{
    int w,a,b,c,n;
    char m[7][70],ch;
    scanf ("%d\n\n",&n);
    for (a=0;a<n;a++)
    {
    gets(m[a]);
    }
    for (a=0;a<n;a++)
    {
        for (b=0;b<strlen(m[a]);b++)
        {
            switch(m[a][b])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            ch=m[a][b]<97?m[a][b]:toupper(m[a][b]);
            m[a][b]=ch;
            //printf ("%c",ch);

            }
        }
        for (b=0;b<strlen(m[a]);b++)
            printf ("%c",m[a][b]);
            printf ("\n\n");
    }
 }
