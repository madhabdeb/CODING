#include<stdio.h>

int main(){

    int a;
    float b;

       scanf("%d%f",&a,&b);
       printf("%.3f km/l",(a+.01)/b);
       printf("\n");

    return 0;
}
