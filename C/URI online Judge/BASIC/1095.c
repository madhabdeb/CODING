#include<stdio.h>

int main(){

    int a,b,sum;
    sum=60;
    a=1;
    b=3;
    printf("I=%d J=%d\n",a,sum);
    for( ;sum!=0; )
    {
        sum-=5;
        a=a+b;
        printf("I=%d J=%d\n",a,sum);
    }
    return 0;
}
