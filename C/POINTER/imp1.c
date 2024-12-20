#include<stdio.h>
void main()
{
int i=87,j=35;
int a[5]={10,20,30,89};

*(a+2)=54;
*(a)=66;

   printf("%d",*(a));
int *p,*q,*pk;
p=&i;
q=&j;
pk=a;
printf("\n%d%d",*p,i++);

(*q)++;
printf("\n%d\n",j);
(*pk)++;
printf("%d",*pk);
*pk=33;
printf("\n%dmhkkjjhj\n\n",*pk);
for(i=0;i<5;i++)
printf("\n%d",*(a+i));


}
