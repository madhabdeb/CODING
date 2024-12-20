#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j;
    char ch,cc[100],cb[100];

     gets(cc);
     i=1;
     for(a=0;a<strlen(cc);a++)
     {
         if((islower(cc[a])|| isdigit(cc[a]))&&i==1)
        {
            i=0;
            if( isdigit(cc[a]))
            putchar(cc[a]);
            else
            putchar(toupper(cc[a]));
        }
        else if(isspace(cc[a]))
             {
             putchar(cc[a]);
             i=1;
             }
        else
        {
             putchar(cc[a]);
        }
     }


}
