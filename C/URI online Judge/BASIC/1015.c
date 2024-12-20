#include<stdio.h>
#include<math.h>

int main(){

    double a,b,i,j,m;
    scanf("%lf%lf%lf%lf",&a,&b,&i,&j);
    m=pow((i-a),2)+pow(j-b,2);
    printf("%.4lf",sqrt(m));
    printf("\n");

    return 0;
}
