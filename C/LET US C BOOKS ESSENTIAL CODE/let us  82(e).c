#include <stdio.h>
void main()
{
int m,a,b,c,d,p,q,r,s;
    printf ("Enter  four degit number\n\n");
    scanf("%d",&m);

  a=m%10;
  p=m/10;
  b=p%10;
  q=p/10;
  c=q%10;
  r=q/10;
  d=r%10;

  s=a*1000+b*100+c*10+d;

    printf("the reverse of the number is %d\n\n",s);
    s==m?printf("they are equal"):printf("they are not equal");




}
