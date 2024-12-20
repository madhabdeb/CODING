#include<stdio.h>

int main(){

    float m;
    scanf("%f",&m);

    if((m<0.0000) || (m>100.00))
    {
    printf("Fora de intervalo\n");
    }
    else
    {
        if(m>=0.00&&m<=25.0000)
        {
            if(m>0.00&&m<25.0000)
            printf("Intervalo (0,25]\n");
            else
            printf("Intervalo [0,25]\n");

        }
        else if(m>=25.00001&&m<=50.0000000)
        {
            if(m>25.0000&& m<=50.0000000)
            printf("Intervalo (25,50]\n");
            else
            printf("Intervalo [25,50]\n");
        }
        else if(m>=50.0001&&m<=75.0000)
        {
            if(m>50.0000&&m<75.0000000)
            printf("Intervalo (50,75]\n");
            else
            printf("Intervalo [50,75]\n");
        }
        else
        {
            if(m>75.0000&&m<=100.0000000)
            printf("Intervalo (75,100]\n");
            else
            printf("Intervalo [75,100]\n");
        }

    }

    return 0;
}
