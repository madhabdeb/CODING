#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j,arr[5][3];
    float f;

        for(a=0;a<5;a++)
        {
             scanf("%d %d %d",&arr[a][0],&arr[a][1],&arr[a][2]);
        }
        for(a=0;a<5;a++)
        {
            f=1.0*arr[a][0]/4+1.0*arr[a][1]/4+1.0*arr[a][2]/2;
            printf("\n%f",f);
        }



}
