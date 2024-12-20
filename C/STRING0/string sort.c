#include <stdio.h>
#include <string.h>
void main ()
{
char s[5][10],t[10];
int a,b,c,p=1;
    for (a=0;a<5;a++)
        gets(s[a]);
//for (a=0;a<5;a++)
       // puts(s[a]);
        printf ("\n\n");

    for (a=0;a<5-1;a++)
    {
        for(b=0;b<5-p;b++)
        {
            if (strcmp(s[b],s[b+1])>0)
                 {
                     strcpy(t,s[b]);
                     strcpy(s[b],s[b+1]);
                     strcpy (s[b+1],t);
                     //printf ("ma");
                 }
                  p++;
        }

    }
    for (a=0;a<5;a++)
        puts(s[a]);









}
