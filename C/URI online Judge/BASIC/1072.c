#include<stdio.h>

int main(){

    int a,b,c,in,out,t;
    scanf("%d",&t);
    in=0;
    out=0;
    for (a=1;a<=t;a++)
    {
     scanf("%d",&b);
        if(b>=10&&b<=20)
        {
          in++;
        }
        else
        {
         out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
