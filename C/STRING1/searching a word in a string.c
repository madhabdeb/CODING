#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m,arr[30],ary[30];
    char ch[30],cc[30],cb;

    printf("enter 2 string\n");
    gets(ch);
    gets(cc);

    a=strlen(ch);
    b=strlen(cc);

    for(i=0;i<a-b;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ch[i+j]==cc[j])
                continue;
            else
                break;
        }
        if(j==b)
            printf("found");
    }

}
