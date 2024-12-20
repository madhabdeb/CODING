#include<stdio.h>

int main(){

    int a,b,c,arr[10];
    scanf("%d",&b);
    c=b;
    arr[0]=c;
    for(a=1;a<10;a++)
    {
    c=c+c;
     arr[a]=c;
    }

     for(a=0;a<10;a++)
    {
    printf("N[%d] = %d\n",a,arr[a]);
    }

    return 0;
}
