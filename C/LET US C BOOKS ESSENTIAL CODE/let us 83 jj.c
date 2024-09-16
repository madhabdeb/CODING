#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a=3,b,c,t,j,x,i,k,p,q,y;
    char ch;

    for( ; ;){
    scanf("%d %d %d %d %d %d",&a,&i,&b,&j,&c,&k);
    if(a==b && b==c)
        printf("fall on one line");
    else if (i==j && j==k)
         printf("fall on one line");
     else if (i==a && j==b && k==c)
         printf("fall on one line");
      else
      {   x=i+j+k;
          y=a+b+c;
         for(t=2;t<10;t++)
         {
           if(a%t==0 && b%t==0 && c%t==0)
             p=1;
         }
         for(t=2;t<10;t++)
         {
           if( i%t==0 && j%t==0 && k%t==0)
             q=1;
         }
         if(p==1 && q==1)
              printf("fall on one line");
         else
         printf("fall on not a straight line");
      }
      printf("\n");
    }


}
