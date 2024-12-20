#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,b,c,d,x,y,sum;

    while(2==scanf("%d %d",&a,&b))
    {
        if(a<=0||b<=0)
        break;
         x=a;
         y=b;
         sum=0;
        if(b>a)
        {
        x=b;
        y=a;
        }
        for(c=y;c<=x;c++)
        {
         printf("%d ",c);
         sum+=c;
        }
        printf("Sum=%d\n",sum);
    }

    return 0;
}
