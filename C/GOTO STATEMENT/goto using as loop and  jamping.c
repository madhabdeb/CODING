#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i=0,j,N,n;
    char ch;

   for (a=0;a<=6;a++)
   {     if(i==1)
            break;
        for(b=0;b<=5;b++)
        {
            printf("madhab\n");
            if(a==2 && b==2)
            {
                i++;
                goto kkk;
            }

        }
   }


        //USE FOR TOTAL JUMP////USE FOR TOTAL JUMP////USE FOR TOTAL JUMP//

        kkk:      //USE FOR TOTAL JUMP//
        printf(" good \n");



        //USE FOR AS A LOOP//

            t=0;
            ppp:
            printf("%d\n",t++);
            if(t<10)
                goto ppp;

        //USE FOR AS A LOOP//

             printf("1 or 2\n");

            AAA:
                scanf("%d",&n);
            if(n==1)
                printf("yes");
            if(n==2)
                printf("No");
            else
            {
                printf("not range\n");
                 goto AAA;
            }

}
