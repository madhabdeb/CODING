#include <stdio.h>
#include <string.h>
void main ()
{
char c[10][10],h[10][10];
int a,m,n,x,p;
    for (a=0;a<3;a++)
    {
    scanf("%s",&c[a]);

    }
    for (a=0;a<3;a++)
    {
        x=strlen(c[a]);
        for(m=0,n=x-1;m<x;m++,--n)
        {
            h[a][m]=c[a][n];
             printf("\n\t%c",h[a][m]);
        }
            h[a][m]='\0';

            printf ("\n%s",h[a]);
    }



   /*for (m=0;m<10;m++)
        {
            //h[m]=c[m];daasd
        strcpy(h[m],c[m]);
            strrev(c[m]);
        }
        for (m=0;m<10;m++)
        {

        if(0==strcmp(c[m],h[m]))
                printf ("\nsame");
        else
            printf ("\nnot same ");

        }*/









}
