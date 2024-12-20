#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m;
    char ch[10][30],cc,cb;

    printf("enter the nmbr=");
    scanf("%d",&n);
   // cb=getche();
   scanf("%c",&cb);

    for(a=0;a<n;a++)
    {
        for(b=0;(cc=getchar())!='\n';b++)
        {
            ch[a][b]=cc;
        }
        ch[a][b]='\0';
    }
  //printf("ma");
    for(a=0;a<n;a++)
    {
         for(b=0;ch[a][b];b++)
        {
            putchar(ch[a][b]);
        }
        printf("\n");

    }


}
