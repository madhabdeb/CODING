#include <stdio.h>
int recur(int);
void main()
{
    int a=1;
    recur(a);
}
int recur(int a)
{
  //printf ("\n%d",a);
    if (a>=10)
    return 0;
    printf ("\n%d",a);
    recur(++a);
    printf ("\n%d",a);
}
