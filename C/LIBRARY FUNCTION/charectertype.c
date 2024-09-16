#include<stdio.h>
#include<ctype.h>

int main()
{
    int a,b,t,i,j;
    char ch;

    ch=getchar();

    if(isalpha(ch))
        printf("isalpha == it is alpha\n\n");
     else
         printf("isalpha == it is not an  alpha\n\n");

    if(isalnum(ch))
        printf("isalnum == it is alpha and numeric\n\n");
    else
         printf("isalnum == it is not an  alpha and numeric\n\n");

      if(islower(ch))
        printf(" islower == it is a lower\n\n");
    else
         printf("islower== it is not an lower\n\n");

     if(isupper(ch))
        printf(" isupper == it is a upper\n\n");
    else
         printf("isupper== it is not an uppper\n\n");

    if(isdigit(ch))
        printf(" isdigit == it is a digit\n\n");
    else
         printf("isdigit == it is not an digit\n\n");

      if(isspace(ch))
        printf(" isspace == it is a space\n\n");
    else
         printf("isspace == it is not an space\n\n");

   if(isprint(ch))
        printf(" isprint == it is a printfable\n\n");
    else
         printf("isprint  == it is not an printfable\n\n");

    if(isascii(ch))
        printf(" isascii  == it  has a ascii value & = %d\n\n",ch);
    else
         printf("isascii  == it  has not a ascii value\n\n");

         islower(ch)? printf("%c\n\n\n",toupper(ch)):printf("%c\n\n\n",tolower(ch));



}
