#include <stdio.h>
#include <string.h>
void main()
{
int a,b,c,d,m,p=0;
printf ("number=");
scanf ("%d\n\n",&m);
char s[m+1][2][30],w[30],ww[30];
    for (a=0;a<m;a++)
    {
        for(b=0;b<2;b++)
        {
            gets(s[a][b]);
        }

    }
 printf ("\nenter word =");
 gets (w);

 for (a=0;a<m;a++)
    {
      if (!(strcmp(w,s[a][0])))
        printf ("%s",s[a][1],p++);
    }
   if(a==m&&p==0)
        printf ("not found");

        printf("\n\n");
        a=0;
        s[m+1][0][0]=' ';
    gets(ww);
    while (s[a][0][0])
    {
        if (!(strcmp(ww,s[a][0])))
        printf ("\n%s",s[a][1]);
        a++;
    }
    if (s[a][0][0]==' ')
        printf ("\nnot found");

















 printf ("\n\n");
 for (a=0;a<m;a++)
    {
        for(b=0;b<2;b++)
        {
            puts(s[a][b]);
        }

    }


}
