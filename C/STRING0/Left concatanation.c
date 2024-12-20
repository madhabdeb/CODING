#include <stdio.h>
void main()
{
    int a,b,d;
    char s[50],c[20];
    gets(s);
    gets (c);
    b=strlen(s);
    d=strlen(c);
    for (a=b-1; a>=0; a--)
    {
        s[d+a]=s[a];
    }
    printf ("%s\n",s);
    for(a=0; a<d; a++)
        s[a]=c[a];
    s[b+d]='\0';
    for (a=0; a<b+d; a++)
        printf ("%c",s[a]);
    printf ("\n%c",s[12]);

}
