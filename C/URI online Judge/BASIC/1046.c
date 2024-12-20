#include<stdio.h>

int main(){

    int a,b,m;
    scanf("%d %d",&a,&b);
    if (a==b)
    {
    m=24;
    }
    else if(b<a)
    {
    m=b+24-a;
    }
    else
    m=b-a;
    printf("O JOGO DUROU %d HORA(S)",m);
    printf("\n");
}
