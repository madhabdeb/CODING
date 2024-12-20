#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,b,c,d,m,e,x,y,t;
    char ch1[20],ch3[20],ch2[20],cp;
    scanf("%d",&t);
    scanf("%c",&cp);
    for (a=1;a<=t;a++)
    {
        gets(ch1);
        gets(ch3);

        if(0==strcmp(ch1,ch3))
        {
        printf("Case %d: Yes",a);
        }
        else
        {
        x=0;
        for(c=0;c<strlen(ch1);c++)
        {
            if(isspace(ch1[c]))
            {
                continue;
            }
            else
            {
            ch2[x]=ch1[c];
            x++;
            }
        }
           ch2[x]='\0';
        if(strcmp(ch2,ch3))
        {
        printf("Case %d:Wrong Answer",a);
        }
        else
        {
        printf("Case %d:Output Format Error",a);
        }
        }
        printf("\n");
    }

    return 0;
}
