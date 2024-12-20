#include<stdio.h>
int main(){

    int a,b,c,i,j,k,x;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
      i=a;
      j=b;
      k=c;
    }
    else if(b>a&&b>c)
    {
      i=b;
      j=a;
      k=c;
    }
    else
    {
    i=c;
    j=b;
    k=a;
    }
    if(j>k)
    {
       ;
    }
    else
    {
     x=j;
     j=k;
     k=x;
    }
printf("%d\n%d\n%d\n\n",k,j,i);
printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
