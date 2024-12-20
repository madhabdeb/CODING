#include<stdio.h>

int main(){

    double a,b,c;

    scanf("%lf%lf%lf",&a,&b,&c);

    printf("TRIANGULO: %.3lf",a*c/2);
    printf("\nCIRCULO: %.3lf",3.14159*c*c);
    printf("\nTRAPEZIO: %.3lf",(1.0/2)*(a+b)*c);
    printf("\nQUADRADO: %.3lf",b*b);
    printf("\nRETANGULO: %.3lf",a*b);
    printf("\n");

    return 0;
}
