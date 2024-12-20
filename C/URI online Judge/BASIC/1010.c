#include<stdio.h>

int main(){

    int c,a=0;
    scanf("%d",&c);
    if(c>=365)
    {
        a=c/365;
        c=c%365;
        printf("%d ano(s)\n",a);
    }
    else
    {
      printf("%d ano(s)\n",a);
    }
    if(c>=30)
    {
        a=c/30;
        c=c%30;
        printf("%d mes(es)\n",a);
    }
    else
    {
      printf("%d mes(es)\n",a);
    }
    if(c>=0)
    {
      printf("%d dia(s)\n",c);
    }

    return 0;
}
