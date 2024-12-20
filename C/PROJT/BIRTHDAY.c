#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c,A,B,C,d;
    {
        printf ("                       HELLO EVERYBODY   \n \n ");
        printf ("    Enter the date of today:=\n");
        printf ("\n\n\nYear  = ");
        scanf ("%d",&a);
        printf ("month = ");
        scanf ("%d",&b);
        printf ("day   = ");
        scanf ("%d",&c);
             printf ("\n\n\n");
        printf ("Enter your birth date:=\n\n\n");
        printf ("\nyear  = ");
        scanf ("%d",&A);
        printf ("month = ");
        scanf ("%d",&B);
        printf("day   = ");
        scanf ("%d",&C);
        if(b&&B>12||c&&C>31)
            printf ("\n\n\n  invalaid input\n\n\n\n\n\n");

        if (A==1986&&B==03&&C==04)
        {
            printf ("\n\nThe software identify that ;");
        }
        if(A==1992 && B==9 && C==29)
        {
            printf ("\n\n\t\tyour name is MOU DEB and student of EEE");
            printf ("\n\n\t\tthe soft ware count ur age:=");
        }
        if (c>C)
        {
            c=c-C;
        }
        else
        {
        c=(c+30-C);
        b=b-1;
        }
            if(b>B)
                {
               b=b-B;
                }
            else
                {
                b=(b+12-B);
                a=a-1;
                }
        printf ("\n\t\tyour age is %d years  %d months %d days\n\n\n\n\n\n\n\n",a-A,b,c);

    }




}

