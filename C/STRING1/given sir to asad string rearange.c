#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t=0,i,j,n,m=1,w=1,x,p;
    char ch[300],cc[300][30],cb[30];

    gets(ch);

    for(a=0;a<strlen(ch);a++)
    {
        if(ch[a]==' '&&ch[a+1]!=' ')
        {
            w++;
        }
    }
    //printf("%d",w);
        t=0;
    for(a=0;a<w;a++)
    {
        i=t;
        while(ch[i]!=' ')
        {
          if(ch[i]=='\0')
            break;
          j=i++;
        }
        x=0;
        for(b=t;b<=j;b++)
        {
          cc[a][x++]= ch[b];
        }
         cc[a][x]='\0';
        t=j+2;
    }
   /* for(a=0;a<w;a++)
    {
        printf("\n%s",cc[a]);
    }
    */
    for(a=0;a<w-1;a++)
    {
        for(b=0;b<w-a-1;b++)
        {
            if(1==strcmp(cc[b],cc[b+1]))
            {
                strcpy(cb,cc[b+1]);
                strcpy(cc[b+1],cc[b]);
                strcpy(cc[b],cb);
            }
        }
    }

    for(a=0;a<w;a++)
    {
        printf("\n%s",cc[a]);
    }
    printf("\n\n");

      p=1;
     for(a=1;a<=w;a++)
    {
        if(0==strcmp(cc[a-1],cc[a]))
        {    p++;
            //printf("madhab\n");
            continue;
        }
        else
        {
            if(p>1)
            {
                printf("\n%s = %d",cc[a-1],p);
                p=1;
            }
        }
    }
}
