#include<stdio.h>

int main(){

   int a,b;
   scanf("%d%d",&a,&b);
   if(b%a==0)
    printf("Sao Multiplos");
    else if(a%b==0)
    printf("Sao Multiplos");
    else
    printf("Nao sao Multiplos");
   printf("\n");

    return 0;
}
