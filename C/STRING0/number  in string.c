#include <stdio.h>
#include <string.h>
void main ()
{
int a,b,c,d,e,f,m=1;
char s[30];
   scanf("%s",s);
   printf ("%s",s);
   for (a=0;s[a]!='\0';a++)
         m*=10;
      //for ()
      m=m/10;
      printf ("\n%d\n\n",m);
      e=atoi(s);
      f=e;
      //printf ("%d\n",e);
      for (m;m>=1;m/=10)
      {
         // e=e-m;
          printf (" \n  %d \t\t\t\n%d\n",d=e/m,m);
          e=e-m*d ;
      }

}
