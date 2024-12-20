#include<stdio.h>

int main(){

    int m,x;
    scanf("%d",&m);

    x=m>=3600?1:0;
    if(x==1)
    {
        printf("%d",m/3600);
        m=m%3600;
    }
    else
        printf("%d",0);

    x=m>=60?1:0;
    if(x==1)
    {
        printf(":%d",m/60);
        m=m%60;
    }
    else
        printf(":%d",0);
    if(m==0)
        printf(":%d",0);
    else
        printf(":%d",m%60);
        printf("\n");

    return 0;
}
