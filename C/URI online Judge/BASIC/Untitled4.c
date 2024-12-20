#include<stdio.h>

int main(){

    int a,b,c,d,m=1,x,y;
    scanf("%d%d",&x,&y);
    y=y%2==0?y-1:y;
    while(y>1)
    {
        if(y%2==0)
        {
            y=y/2;
        }
        else
        {
        y=3*y+1;
        }
        m++;
        }
      printf("%d\n",m);
    return 0;
}
