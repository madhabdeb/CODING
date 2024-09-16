#include<stdio.h>
#include<math.h>
#include<string.h>


//exit used for the purpose of  total program exit//

int main()
{
    int a,b,t,i,j;
    char ch,cc;

    for(a=0;a<10;a++)
    {
     ch=getchar();
     scanf("%c",&cc);
     if (ch=='a'||ch=='A')
        continue;
    else
        exit(0);

    }

   puts("madhab");
}
