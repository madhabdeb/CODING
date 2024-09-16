#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,d,z,x1,x2,y1,y2,x,y;
    char ch;

    scanf("%d %d",&x1,&y1);
    scanf("%d",&d);
    scanf("%d %d",&x2,&y2);
    x=pow((x1-x2),2);
    y=pow((y1-y2),2);
    z=sqrt(x+y);
    if(z==d)
    printf("on the perimeter of the circle");
    else if(z>d)
     printf("outside the perimeter of the circle");
     else
     printf("inside the perimeter of the circle");


}
