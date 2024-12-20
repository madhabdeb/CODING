#include<stdio.h>
int main(){

    int a,b,c,d,m=0,x,y;
    scanf("%d%d",&x,&y);
    m=0;
    y=y%2==0?y-1:y;
    for(a=y;a>=(x+y)/2;a-=2)
    {
        c=1;
        d=a;
    while(d>1)
    {
        if(d%2==0)
        {
            d=d/2;
        }
        else
        {
         d=3*d+1;
        }
        c++;
        if(c>m)
        {
        m=c;
        }
    }
    }
    printf("%d\n",m);
    return 0;
}
