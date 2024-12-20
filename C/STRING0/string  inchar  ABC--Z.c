#include <stdio.h>
#include <string.h>
void main ()
{

int a,b,d,w=1,n,m,p,q;
char s[70];
char ch,x='a';
gets(s);

for(a=0;s[a];a++)
{
   if (s[a]==' '&&s[a+1]!=' ')
        w++;
}
//printf ("%d",w);
    b=0;
    m=0;
    q=0;

  for (n=1;n<=w;n++)
  {
      p=q;
    while(s[p]!=' ')
    {
     if (s[p]=='\0')
        break;
     m=p++;

     }
        for (p=q;ch=x,p<=m;p++,x++)
            s[p]=ch;

        q=m+2;
        //b=m;
        //x--;
  }
  printf (s);













}
