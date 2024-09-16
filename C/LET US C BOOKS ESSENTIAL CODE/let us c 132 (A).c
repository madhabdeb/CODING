#include <stdio.h>
void main ()
{
int a,b;
printf ("1");
    for (a=2;a<=300;a++)
    {
        for (b=2;b<=a;b++)
        {
        if (a%b==0&&b<a)
          break;
         else

            {
              if(a==b)
          printf ("\n%d",a);

          }

        }

    }
}
