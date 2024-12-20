#include <stdio.h>
void main ()
{
    int a,b,c=0,n,z,x,p,q,word=1;
    char s[100];
    gets(s);
    strrev (s);
        for (a=0;a<strlen(s);a++)
        {
        if (s[a]==' '&& s[a+1]!=' ')
           word++;
        }
    // printf ("ma");
    for (b=1;b<=word;b++)
    {
       a=c;
       while (s[a]!=' ' && s[a]!='\0')
       x=a++;

       for (p=x,q=c;p>=x/2;p--,q++)
            {
            z=s[p];
            s[p]=s[q];
            s[q]=z;
            }

       c=x+2;
    }

    printf (s);





}
