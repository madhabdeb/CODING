#include <stdio.h >
void main ()
{

int a,b,m,c,n,x;
    m=n=x=0;
    do
    {
     printf ("\t\t\tEnter number=");
     scanf ("%d",&a);
     a==0?x++:a>0?m++:n++;
     printf("Enter more pree (0)=");



     scanf("%d",&c);
    }while(c==0);

    printf("\n\n\t\t\tpositive number=%d\n \t\t\tnegative number=%d\n\t\t\t     zero input =%d",m,n,x);

}
