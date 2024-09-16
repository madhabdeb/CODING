#include <stdio.h>
void main()
{
int a,b,c,d,e,f,p,q,r,s;
    printf ("enter five digit number\n");
    scanf("%d",&a);

     b=(a%10<9?a%10+1:0);
     p=a/10;
     c=(p%10<9?p%10+1:0);
     q=p/10;
     d=(q%10<9?q%10+1:0);
     r=q/10;
     e=(r%10<9?r%10+1:0);
     s=r/10;
     f=(s%10<9?s%10+1:0);

     a=(b*1+c*10+d*100+e*1000+f*10000);
     printf ("%d",a);






}
