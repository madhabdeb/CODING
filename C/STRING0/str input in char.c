#include <stdio.h>
#include <string.h>
void main ()
{
char s[12][100],ch;
int a,b,c,d,n;
printf ("number= ");
scanf("%d\n\n",&n);
for (a=0;a<n;a++)
{
for(b=0;(ch=getchar())!='\n' ;b++)
{
    s[a][b]=ch;
}
s[a][b]='\0';
printf ("\n\n%s",s[a]);
}

for (a=0;a<n;a++)
{
for(b=0;s[a][b];b++)
{
if (s[a][b]>='a'&& s[a][b]<='z')
s[a][b]='A'+s[a][b]-'a';
printf ("%c",s[a][b]);
}
}
}
