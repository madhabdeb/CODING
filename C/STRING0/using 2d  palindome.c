#include <stdio.h>
#include <string.h>
void main ()
{
int a,b,c,x;
char s[3][30],ch;
 for (a=0;a<3;a++)
 {
     for (b=0;(ch=getchar())!='\n';b++)
     {
         s[a][b]=ch;
     }
     s[a][b]='\0';
 }

 for (a=0;a<3;a++)
 {
     for (b=0,c=strlen(s[a])-1;s[a][b];c--,b++)
     {
            //printf ("%s",s[a]);
       if (s[a][b]== s[a][c])
       {
           x=0;
           //printf ("\t%c  %c",s[b],s[c]);
       }
       else
       {
           x=1;
           break;
       // printf ("\n%d",x);
     }
     }
     //printf("\t%d",c);
      if(x==0)
        printf("equal");
     else
        printf ("not");

}


}
