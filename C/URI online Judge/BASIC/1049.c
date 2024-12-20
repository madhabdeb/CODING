#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    gets(ch1);
    gets(ch2);
    gets(ch3);

    if((!strcmp("vertebrado",ch1)) && (!strcmp("ave",ch2)) && (!strcmp("carnivoro",ch3)))
    printf("aguia");
    else if((!strcmp("vertebrado",ch1)) && (!strcmp("mamifero",ch2)) && (!strcmp("onivoro",ch3)))
    printf("homem");
    else if((!strcmp("vertebrado",ch1)) && (!strcmp("ave",ch2)) && (!strcmp("onivoro",ch3)))
    printf("pomba");
    else if((!strcmp("vertebrado",ch1)) && (!strcmp("mamifero",ch2)) && (!strcmp("herbivoro",ch3)))
    printf("vaca");
    else if((!strcmp("invertebrado",ch1)) && (!strcmp("inseto",ch2)) && (!strcmp("hematofago",ch3)))
    printf("pulga");
    else if((!strcmp("invertebrado",ch1)) && (!strcmp("inseto",ch2)) && (!strcmp("herbivoro",ch3)))
    printf("lagarta");
    else if((!strcmp("invertebrado",ch1)) && (!strcmp("anelideo",ch2)) && (!strcmp("hematofago",ch3)))
    printf("sanguessuga");
    else if((strcmp("invertebrado",ch1)) && (!strcmp("anelideo",ch2)) && (!strcmp("onivoro",ch3)))
    printf("minhoca");
    printf("\n");

}
