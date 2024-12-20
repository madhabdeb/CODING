#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int a,b,c,d=0,m,e,x,y,cry=0,s;
    char ch1[1000],ch2[1000],ch3[1000];
    gets(ch1);
    gets(ch2);
    x=strlen(ch1);
    y=strlen(ch2);
   // puts(ch1);
    for(a=x,b=y;a>=0;b--,a--)
    {
        if(b>=0)
        {
        m=(ch1[a]-48)+(ch2[b]-48)+cry;
            if(m>=10)
            {
            s=m%10;
            cry=1;
            }
             else
            {
            cry=0;
            }
        }
        else if(a>=0)
        {
        m=(ch1[a]-48)+cry;
             if(m>=10)
            {
            s=m%10;
            cry=1;
            }
            else
            {
            cry=0;
            }
        }

        ch3[d++]=(s+48);
        printf("%d\n",s);

    }
    if(cry==0)
    {
    ch3[d]='\0';
    }
    else
    {
    ch3[d]='1';
    ch3[d+1]='\0';
    }
   for(a=d;a>=0;a--)
    printf("%c",ch3[a]);
    return 0;
}
