#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int b,c,x,p=0;
    float a;

    for (a=0;a<2.2;a=a+.2)
    {
       // printf("%d\n",p++);
        x=1;
        for(c=1;c<=3;c++)
        {
            if(a==1.00)
            {
                printf("I=%d J=%d",1,x++);
            }
            if(a==2.00)
            {
                printf("I=%d J=%d",2,x++);
            }

            if(a==0.00)
            {
                printf("I=%d J=%d",0,x++);
            }
            else
            {
                printf("I=%.1f J=%.1f",a,a+c);
            }
            printf("\n");
        }
    }
    return 0;
}
