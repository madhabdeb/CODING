#include<stdio.h>

int main(){

        int b,p;
        float a;

        scanf("%f",&a);
        printf("NOTAS:\n");
        if(a>=100)
        {
            b=a/100;
            printf("%d nota(s) de R$ %.2f\n",b,100.00);
            a=a-(b*100.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,100.00);
        }

        if(a>=50)
        {
            b=a/50;
            printf("%d nota(s) de R$ %.2f\n",b,50.00);
            a=a-(b*50.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,50.00);
        }

        if(a>=20)
        {
            b=a/20;
            printf("%d nota(s) de R$ %.2f\n",b,20.00);
            a=a-(b*20.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,20.00);
        }
         if(a>=10)
        {
            b=a/10;
            printf("%d nota(s) de R$ %.2f\n",b,10.00);
            a=a-(b*10.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,10.00);
        }
         if(a>=5)
        {
            b=a/5;
            printf("%d nota(s) de R$ %.2f\n",b,5.00);
            a=a-(b*5.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,5.00);
        }
        if(a>=2)
        {
            b=a/2;
            printf("%d nota(s) de R$ %.2f\n",b,2.00);
            a=a-(b*2.00);
        }
        else
        {
          printf("%d nota(s) de R$ %.2f\n",0,2.00);
        }

        printf("MOEDAS:\n");

        if(a>=1.00)
        {
            printf("%d moeda(s) de R$ %.2f\n",1,1.00);
            a=a-1.00 ;
        }
         else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,1.00);
        }
        if(a>=0.00)
        {
            p=a*1000;
            if(p%10>=5)
            {
            a=a+.01;
            }
        }
         if(a>=.50)
        {
            printf("%d moeda(s) de R$ %.2f\n",1,.50);
            a=a-.50 ;
        }
         else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,.50);
        }

         if(a>=.25)
        {
            printf("%d moeda(s) de R$ %.2f\n",1,0.25);
            a=a-.25 ;
        }
         else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,.25);
        }

        if(a>=.10)
        {
            b=a/.10;
            printf("%d moeda(s) de R$ %.2f\n",b,0.10);
            a=a-(b*.10) ;
        }
        else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,.10);
        }

         if(a>=.05)
        {
            printf("%d moeda(s) de R$ %.2f\n",1,0.05);
            a=a-.05 ;
        }
         else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,.05);
        }
        if(a>=.01)
        {
            b=a/.01;
            printf("%d moeda(s) de R$ %.2f\n",b,0.01);
        }
        else
        {
          printf("%d moeda(s) de R$ %.2f\n",0,.01);
        }

        }
