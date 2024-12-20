#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m,w=1,p,q,s;
    char ch[100],cc,cb;

    gets(ch);
    for(a=0;a<strlen(ch);a++)
    {
        if(ch[a]==' '&& ch[a+1]!=' ')
               w++;
    }
    //printf("%d",w);
        s=0;
    for(a=0;a<w;a++)
    {
      i=s;
    while(ch[i]!=' ')
    {
        if(ch[i]=='\0')
            break;
        p=i++;
    }
    for(b=p;b>=s;b--)
    {
        printf("%c",toupper(ch[b]));
    }
    if(ch[i]==' ')
    {
        printf(" ");
    }

     s=p+2;
    }

}
