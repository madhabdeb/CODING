#include<string.h>
#include <stdio.h>
void main ()
{
int w=1,a,m=0,n,b,x,p;
char s[70],c[70];
gets(s);
strcpy(c,s);
for (a=0;a<strlen(s);a++)
{
if (s[a]==' '&& s[a+1]!=' ')
    w++;
}
//printf ("%d\n",w);
p=0;
a=0;
for(;p<strlen(s);)
    {
        for (b=a;s[b]!=' ';b++)
        {
            if(s[b]=='\0')
                break;
        }

        --b;
        printf ("%d    %d \n",b,a);
        for (n=b;n>=a;n--)
        {
          s[p]=c[n];
           p++;
        }
        //p+=2 ;
       a=++p;
        printf ("%d\n",p);
    }
printf ("\n\n");
printf (s);



}
