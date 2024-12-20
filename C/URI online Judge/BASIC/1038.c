#include<stdio.h>

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
    printf("Total: R$ %.2f",b*4.00);
    }
    else if(a==2)
    {
    printf("Total: R$ %.2f",b*4.50);
    }
    else if(a==3)
    {
    printf("Total: R$ %.2f",b*5.00);
    }
    else if(a==4)
    {
    printf("Total: R$ %.2f",b*2.00);
    }
    else
    printf("Total: R$ %.2f",b*1.50);
    printf("\n");

    return 0;
}
