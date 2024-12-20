#include <stdio.h>
#include <string.h>
void main ()

{
    int a,b,c,d,n,p,w,i,k,s,cont;
    char m[10][30],ch;
    scanf ("%d\n\n",&n);

        for (a=0;a<n;a++)
           gets(m[a]);
           //printf (m[a-1]);

        for (a=0;a<n;a++)
        {
         strrev(m[a]);
        // printf(m[a]);
         b=strlen(m[a]);
        // printf ("%d",b);
          w=1;
            for (k=0;k<b;k++)
              if (m[a][k]==' ' && m[a][k+1]!=' ')
                ++w;
                //printf ("%d",343);
                //printf ("\n%d",w);
               s=0;
           for (d=1;d<=w;d++)
           {
               k=s;
               while (m[a][k]!=' '&& m[a][k]!='\0')
                cont=k++;
          //      printf ("%d",cont);

            for (i=cont,p=s;p<=(cont+s)/2;i--,p++)
            {
            ch=m[a][i];
            m[a][i]=m[a][p];
            m[a][p]=ch;
           // printf ("k");
            }
           // printf ("sdf");
            s=cont+2;
           }

            for(c=0;c<b;c++)
          printf ("%c",m[a][c]);
          printf ("\n");

         }

    }


