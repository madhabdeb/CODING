#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,n,j;
    char ch[5][100],cc;

    printf("how many str will u enter=");
    scanf("%d",&n);
    cc=getchar();

    for(a=0;a<n;a++)
    {
        gets(ch[a]);
    }

     for(a=0;a<n;a++)
    {
        puts(ch[a]);
    }




}
