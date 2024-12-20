#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,n,t,i,j;
    char ch[10][2][30],p,mm[30];
    scanf("%d",&n);
    scanf("%c",&p);
    for(a=0;a<n;a++)
    {
        for(b=0;b<2;b++)
        {
            gets(ch[a][b]);

        }
    }
    printf("\n");
    for(a=0;a<n;a++)
    {
        for(b=0;b<2;b++)
        {
            puts(ch[a][b]);
        }
    }

    puts("enter name");
    gets(mm);
     for(a=0;a<n;a++)
    {
       if(0==strcmp(mm,ch[a]))
         break;
    }
       if(a<n)
        puts(ch[a][1]);
       else
        puts("not");

}
