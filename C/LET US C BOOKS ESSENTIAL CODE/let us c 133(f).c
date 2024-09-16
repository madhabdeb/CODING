#include <stdio.h>
void main()
{
int a,b,c,d,p=1;
char f=65;
    for (a=1;a<=6;a++)
        printf("%c",f++);
        printf("%c",f);
    for (a=1;a<=6;a++)
        printf ("%c",--f);
        printf("\n\n");

    for(a=1;a<=6;a++)
    {
        for(b=6;b>=a;b--)
            printf("%c",f++);
            for(c=1;c<=p;c++)
                printf (" ");
            for (d=6;d>=a;d--)
                printf ("%c",--f);
            printf ("\n\n");
            p+=2;
    }
       p=p-4;
    for(a=2;a<=6;a++)
    {   for(b=1;b<=a;b++)
           printf ("%c",f++);
           for (c=p;c>=1;c--)
            printf (" ");
           for (d=1;d<=a;d++)
            printf ("%c",--f);
           printf ("\n\n");
           p=p-2;
    }
    for (a=1;a<=6;a++)
        printf ("%c",f++);
        printf ("%c",f);
    for (a=1;a<=6;a++)
        printf("%c",--f);

}
