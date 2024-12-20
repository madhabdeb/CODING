#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,t,i,j;
    char ch[100],cb[100],cc[100];
    for( ; ;){
    gets(ch);
    gets(cc);
    puts("enter ur commund");
    gets(cb);
    a=atoi(ch);
    b=atoi(cc);
    if(!strcmp(cb,"add"))
    printf("%d",a+b);
    else if(!strcmp(cb,"multi"))
    printf("%d",a*b);
    else if(!strcmp(cb,"devide"))
    printf("%d",a/b);
    else
    printf("%d",a-b);

    printf("\n");
    }


}
