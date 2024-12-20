#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m;
    char ch[10],cc[10],cb;

     gets(ch);
     gets(cc);
     a=strlen(ch);
     b=strlen(cc);
     i=a>b?a:b;

     for(a=0;a<i;a++)
     {
         if(ch[a]>cc[a])
        {
        j=1;
        break;
        }
        else if(ch[a]<cc[a])
        {
        j=-1;
        break;
        }
        else
            continue;
     }
     printf("%d",j);

}
