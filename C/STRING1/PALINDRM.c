#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j;
    char ch,cc[100],cb[100];

    for(a=0;(ch=getchar())!='\n';a++)
    {
        cc[a]=ch;
    }
        cc[a]='\0';
        i=0;

    for(b=0,a=strlen(cc)-1;a>=strlen(cc)/2;b++,a--)
    {
        if(cc[a]==cc[b])
        {
            i++;
        }
        else
        {
            break;
            i=0;
        }

    }
    if(i!=0)
    {
        printf("palindrom");
    }
    else
    {
       printf("not palindrom");
    }




    printf("\n\n\nMADHAB DEB\n\n\n");


    scanf("%s",cc);
    for(b=0,a=strlen(cc)-1;a>=0;a--,b++)
    {
        cb[b]=cc[a];
    }
    cb[b]='\0';
    if(0==strcmpi(cb,cc))
        printf("palindrom\n");
    else
        printf("not palindrom\n");




     printf("\n\n\nMADHAB DEB\n\n\n");


    while(1!=gets(cc))
    {
      strcpy(cb,cc);
      strrev(cb);
      if(0==strcmpi(cc,cb))
        printf("palindrom\n");
      else
        printf("not palindrom\n");

    }






















}
