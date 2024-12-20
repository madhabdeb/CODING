#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,n,m,arr[30],ary[30];
    char ch[30],cc[30];

    gets(ch);
    gets(cc);
    a=strlen(ch);
    b=strlen(cc);

    for(i=0;i<b;i++)
    {
        cc[a+i]=cc[i];
    }
     for(i=0;i<a;i++)
    {
        cc[i]=ch[i];
    }
     cc[a+b]='\0';

     printf("\n\nLEFT CONCATION\n\n");
    puts(strupr(cc));

     printf("\n\nRIGHT CONCATION\n\n");

      gets(ch);
      gets(cc);
    a=strlen(ch);
    b=strlen(cc);

      for(i=0;i<a;i++)
    {
        cc[b+i]=ch[i];
    }
     cc[a+b]='\0';
      puts(strupr(cc));


}
