#include<stdio.h>

int answer(char ch)
{
    if(ch=='a')
        return 1;
    else if (ch=='b')
        return 2;
    else if (ch=='c')
        return 3;
    else
        return 4;
}

int main()
{

    int a,b,c,x,y,arr[8][8],i,j,sum=0,ch1[1][30],ans=0,mark=3,permi=1;
    char ch,chz;
    printf("\t\t     WELCOME TO EVERYONE TO OUR NEW OUR GAME\n\n\n");
    printf("\t\t     ENTER YOUR NAME (player)==");

    gets(ch1);

    printf("\n\n");
    printf("\n\n\t\t     CONGRATS %s  TO OUR NEW GAME\n\n",strupr(ch1));
    printf("\n\nTHERE ARE TWO LEVEL IN OUR GAME SO");
    printf("\n\nSOME COMMON RULE OF OUR GAME IS GIVEN ::\n\n");

    printf("1: IN THIS GAME PARTIPATE ONE  PLAYER ONLY BUT  HELPED BY MORE\n\n");
    printf("2: IN THE FIRST LEVEL YOU HAVE TO CORRECT TWO ANSWER.\n\n");
    printf("3: COMPLITING 2 RIGHT ANSWER YOU CAN ENTER IN LEVEL TWO OTHER WISE \"END\"\n\n");
    printf("4: IN LEVEL YOU WILL GET 100 DOLLAT PER RIGHT ANSWER\n\n");
    printf("5: FINISHING THE GAME YOU WILL GET YOUR SCORE\n\n\n");

    printf("\t\t    OUR GAME IS GOING TO START\n\n");
    printf("\n\nLEVEL ONE(1)::\n\n");

    for(a=1; a<=3; a++)
    {
        if(a==1)
        {
            printf("1::what is the name of your country=\n\n");
            printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
            ch=getchar();
            scanf("%c",&chz);
            ans=answer(ch);
            if(ans!=1)
                mark--;
        }
        if(a==2)
        {
            printf("\n\n2::Write a country name out of  ASIA=\n\n");
            printf("a>Bangladesh       b>india     c>italy     d>bhutan\t   ans=");
            ch=getchar();
            scanf("%c",&chz);
            ans=answer(ch);
            if(ans!=3)
                mark--;
        }
        if(a==3)
        {
            printf("\n\n3:which country is called the riase of sun?:\n\n");
            printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
            ch=getchar();
            scanf("%c",&chz);
            ans=answer(ch);
            if(ans!=3)
                mark--;
        }

        if(mark==1)
        {
            permi=0;
            break;
        }

    }

    //LEVER OF TWO CODING OF THE GAME////

    printf("\n\n\n");

    mark=0;

    if (permi==0)
    {
        printf("GETTING TWO WRONG ANSWER SO THAT THE GAME IS OVER");
    }
    else
    {
        printf("\t\t       CONGRATS IN LEVEL TWO\n\n\n\n**IF YOU CAN ANSWERED EACH QUESTION YOU WILL GET 100 DOLLOR EACH LEVEL**\n\n");
        for(a=1; a<=10; a++)
        {
            if(a==1)
            {
                printf("1::which one is the biggest country of them?\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==3)
                    mark++;
            }
            else if(a==2)
            {
                printf("\n\n2::which one is the smallest country of them?=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==4)
                    mark++;
            }
            else if(a==3)
            {
                printf("\n\n3::which country language is hindi=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==2)
                    mark++;
            }
            else if(a==4)
            {
                printf("\n\n4::which country is independent in 1971=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==1)
                    mark++;
            }
            else if(a==5)
            {
                printf("\n\n5::which country language is bangali=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==1)
                    mark++;
            }
            else if(a==6)
            {
                printf("\n\n6::which country's capital is Dhaka=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==1)
                    mark++;
            }
            else if(a==7)
            {
                printf("\n\n7::which country's capital is Delhi=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==2)
                    mark++;
            }
            else if(a==8)
            {
                printf("\n\n8::which country's capital is Baijing=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==3)
                    mark++;
            }
            else if(a==9)
            {
                printf("\n\n9::which is the nearest country of Nepal\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==2)
                    mark++;
            }
            else if(a==10)
            {
                printf("\n\n10::THE STUDENT OF SIU,SYLHET.WHERE IS IT=\n\n");
                printf("a>Bangladesh       b>india     c>japan     d>bhutan\t   ans=");
                ch=getchar();
                scanf("%c",&chz);
                ans=answer(ch);
                if(ans==1)
                    mark++;
            }

        }
    }
    printf("\n\n\n\t\tYOU HAVE GOT TOTAL==%d dollar OUT OF 1000 DOLLOR",mark*100);

    printf("\n\n\n\n");
    return 0;

}
