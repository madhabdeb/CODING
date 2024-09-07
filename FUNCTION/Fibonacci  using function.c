#include <stdio.h>
int fibo(int x)
{
    if(x==0||x==1)
    return x;
    else
    return fibo(x-1)+fibo(x-2);

}
    void main ()
    {
        int a,b,c,d;
            for (a=0;a<=10;a++)
                printf("%d\n",fibo(a));

    }
