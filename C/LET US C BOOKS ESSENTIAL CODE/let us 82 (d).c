#include <stdio.h>
void main(){

int a,b;
printf ("enter a  year ");
scanf ("%d",&a);
printf("\n\nTHE 1st JANUARY OF %d is\n\n",a);
a=a-2014;
b=(a>=4?a/b:0);
a=a*365+b;
a%=7;
(a==0?printf("WEDNESDAY"):a==1?printf("THURSDAY"):a==2?printf("FRIDAY"):a==3?printf("SATURDAY"):a==4?printf("SUNDAY"):a==5?printf("MONDAY"):printf("TUESDAY"));

printf("\n\n");








}
