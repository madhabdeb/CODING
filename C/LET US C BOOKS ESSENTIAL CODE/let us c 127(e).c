#include<stdio.h>
void main()
{
int  a,b,n,c,m,d;
    for (a=1;a<= 9;a++)
    {
        for (b=1;b<=9;b++)
        {
            for (c=1;c<=9;c++)
            {
            m=a*a*a+b*b*b+c*c*c;
            n=a*100+b*10+c;
            m==a*100+b*10+c? printf("\n\n%d",m):printf ("");
            if(m==n)
                printf("\n\n%d",n);
            }
        }
    }

}
