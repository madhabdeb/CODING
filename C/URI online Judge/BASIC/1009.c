#include<stdio.h>
#include<string.h>

int main(){

    double a,b,m;
    char ch[12];
    gets(ch);
    scanf("%lf%lf",&a,&b);
    m=b>0?(b*15/100):0;
    printf("TOTAL = R$ %.2lf",a+m);
    printf("\n");

    return 0;
}
