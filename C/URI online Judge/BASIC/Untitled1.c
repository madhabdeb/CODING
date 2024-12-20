#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,b,c,m=0;
    scanf("%d%d",&a,&b);

    for (c=a-1;c>b;c--)
    {
     if(c%2==1||c%2==-1)
     {
         m=m+c;
     }
    }
    printf("%d\n",m);
    return 0;
}
