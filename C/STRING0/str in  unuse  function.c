#include <stdio.h>
void main ()
{
    int a=0;
    char c,s[100];
    while((c=getchar())!='\n')
    {
        if (a<100)
            s[a++]=c;

    }
    s[a]='\0';
    printf ("%s",s);
}
