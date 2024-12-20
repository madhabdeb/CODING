#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    float a,b,c,i,j,k;
    scanf("%f%f%f",&a,&b,&c);
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
    if(j+k>i)
    {
        printf("Perimetro = %.1f",i+j+k);
    }
    else
    {
        printf("Area = %.1f",.5*(a+b)*c);
    }
    printf("\n");
    return 0;
}
