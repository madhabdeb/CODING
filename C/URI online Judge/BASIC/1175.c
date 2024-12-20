#include<stdio.h>

int main(){

    int a,b,c,arr[20];
    b=20;
    for (a=0;a<b;a++)
    {
        scanf("%d",&arr[a]);
    }
    a=0;
    b=19;
    while(a<=b)
    {
    if(a<b)
    {
     c=arr[a];
     arr[a]=arr[b];
     arr[b]=c;
    }
    a++;
    b--;
    }
    b=20;
    for (a=0;a<b;a++)
    {
        printf("N[%d] = %d\n",a,arr[a]);
    }


    return 0;
}
