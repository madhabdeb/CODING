#include<stdio.h>
int main(){
    float a,b,x;
    int y;
    b=0;
    x=0;
    while(1)
    {
        ppp:
        scanf("%f",&a);
        if(a<0.00||a>10.00)
        {
        printf("nota invalida\n");
        }
        else
        {
            b=b+a;
            ++x;
        if(x==2)
        {
        x=0;
        printf("media = %.2f\n",b/2.0);
        b=0;
        kkk:
        scanf("%d",&y);
            if(y==2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                break;
            }
            else if(y==1)
            {
              printf("novo calculo (1-sim 2-nao)\n");
              goto ppp;
            }
            else
            {
              printf("novo calculo (1-sim 2-nao)\n");
              goto kkk;
            }

        }
        }
    }
    return 0;
}
