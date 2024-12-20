#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,b,c,d,m,e,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(b==d)
    {
        y=0;
        e=0;
    }
    else if(b>d)
    {
        y=d+60-b;
        e=1;
    }
    else
    {
        y=d-b;
        e=0;
    }

    if(a==c && y==0)
    {
    x=0;
    }
    else if(a>c)
    {
        x=24+c-a-e;
    }
    else
    {
        x=c-a-e;
    }
    if(x==0&&y==0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }




    return 0;
}
