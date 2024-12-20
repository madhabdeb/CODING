#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m=1;
    char ch[70],cc,cb;

    printf("enter a stringfor counting a word\n");
    gets(ch);
    for(a=0;a<strlen(ch);a++)
    {
        if(ch[a]==' ' && ch[a+1]!=' ')
            m++;
    }
    printf("in this string total %d word.",m);

}
