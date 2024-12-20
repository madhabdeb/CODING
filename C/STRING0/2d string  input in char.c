#include<stdio.h>
#include <ctype.h>
#include <string.h>
void main ()
{
int  i=10,n,a,b,d;
char s[5][2][30],c;
printf ("number =");
scanf ("%d\n\n",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<2;b++)
        {
            for (d=0;(c=getchar())!='\n';d++)
               s[a][b][d]=c;

//        gets(s[a][b]);
       s[a][b][d]='\0';

        }
     // s[a][b][d]='\0';
      printf ("%d",d);
        printf ("%s\n",s[0][1]);
    }
    for (a=0;a<n;a++)
    {
        for (b=0;b<2;b++)
        {
           for (d=0;d<s[a][b][d];d++)
            printf ("%c",s[a][b][d]);
           // printf ("%d",strlen(s[a][b]));

     //puts(s[a][b]);


        }
        printf ("\n\n");

    }
    //printf ("\n%s  %s",s[0][0],s[0][1]);











}
