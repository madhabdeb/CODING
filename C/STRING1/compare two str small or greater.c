#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j;
    char ch[100],cc[100];
    gets(ch);
   // gets(cc);
    a=strcmp(ch,"mou");
    if(a==0)
      puts("same");
    else if(a<0)
    puts("smaller");
    else
    puts("greater");



}
