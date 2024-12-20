#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,n,c;
    c=1;
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {
     printf("%d ",c++);
     printf("%d ",c++);
     printf("%d ",c++);
     printf("PUM\n");
     c++;
     }
    return 0;
}
