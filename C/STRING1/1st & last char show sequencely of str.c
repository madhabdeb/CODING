#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j;
    char ch[100];

    gets(ch);
    i=strlen(ch);
    a=0;
    b=i-1;
    printf("%d\n",b);
    while(a<=b)
    {
     if(a<b)
     printf(" %c %c",ch[a],ch[b]);
     else
     printf(" %c",ch[a]);
     a++;b--;
    }

}
