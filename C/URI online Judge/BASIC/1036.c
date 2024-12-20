#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,r1,r2;
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0||d<0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        d=sqrt(d);
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f",r2);
    }
     printf("\n");

    return 0;
}
