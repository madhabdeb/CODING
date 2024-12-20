#include <stdio.h>
#include <string.h>
void main ()
{
char s[30];
int a,c,b,d;
gets (s);
a=strlen(s);
for (b=0,c=a-1;b<a/2;b++,c--)
{
    if (s[b]==s[c])
        printf ("equal");
    else
        {
        printf ("not equal");
         break;
        }
}




}
