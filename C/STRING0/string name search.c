#include <stdio.h>
void main ()
{
    int a,n,b=0;
    char m[20][20],ch[20];
    scanf ("%d\n\n",&n);
    for (a=0;a<n*2;a++)
    {
    scanf ("%s",m[a]);
    }
    printf ("\nitem=");
    scanf ("%s",ch);
    //printf (ch);

        for (a=0;a<n*2;a+=2)
        {
            //printf ("\nma");
            if (!(strcmp(ch,m[a])))
            {
               // printf ("ma");
            printf ("%s",m[a+1]);
            b++;
            }
        }

        if (b==0)
        {
        printf ("not find ");
        }
       //m[0][0]=ch;
       //  printf ("\n%s",m[0]);

}
