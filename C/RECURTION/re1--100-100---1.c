#include<stdio.h>
recur(int a)
{
    if (a==11)
    return;
    printf ("%d\n",a);
    recur(++a);
    printf ("%d\n",a);
}
void main ()
{
    int a,b,c;
    recur(1);
}
