#include<stdio.h>

int main(){

       int a;
       scanf("%d",&a);
       printf("%d\n",a);

        if(a>=100)
        {
            printf("%d nota(s) de R$ %d,00\n",a/100,100);
            a=a%100;
        }
        else
        {
          printf("%d nota(s) de R$ %d,00\n",0,100);
        }
        if(a>=50)
        {
            printf("%d nota(s) de R$ %d,00\n",a/50,50);
            a=a%50;
        }
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,50);
        }
         if(a>=20)
        {
            printf("%d nota(s) de R$ %d,00\n",a/20,20);
            a=a%20;
        }
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,20);
        }
         if(a>=10)
        {
            printf("%d nota(s) de R$ %d,00\n",a/10,10);
            a=a%10;
        }
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,10);
        }
         if(a>=5)
        {
            printf("%d nota(s) de R$ %d,00\n",a/5,5);
            a=a%5;
        }
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,5);
        }
        if(a>=2)
        {
            printf("%d nota(s) de R$ %d,00\n",a/2,2);
            a=a%2;
        }
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,2);
        }
        if(a==1)
            printf("%d nota(s) de R$ %d,00\n",a/1,1);
         else
        {
          printf("%d nota(s) de R$ %d,00\n",0,1);
        }


    return 0;
}
