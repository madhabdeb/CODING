#include<string.h>
#include <stdio.h>
void main ()
{
int w=1,a;
char s[70];
gets(s);
for (a=0;a<strlen(s);a++)
{
if (s[a]==' '&& s[a+1]!=' ')
    w++;
}
printf ("%d",w);
}
