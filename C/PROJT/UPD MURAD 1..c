#include<stdio.h>

int player,score,ans;
char name[10][30],date[30],ch,cp;


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


void highscr(void)
{
    printf("name");
    printf("score");
    printf("date");
}


int play(void)
{

    printf("\nDO YOU WANT TO PLAY THIS GAME SINGLE OR MULTIPLE\n");
    printf("A> SINGLE \t B> MORE\n");
     printf("SELECT == ");
    scanf("%c",&cp);
    scanf("%c",&cp);
    cp=tolower(cp);
    ans=answer(cp);
    if(ans==2)
    {
        printf("\n\nTOTAL PERTICIPIENT    (NOT MORE THEN 10)  ==");
        scanf("%d",&ans);
    }
    return ans;

}

/*void start(void)
{
    int a;

    printf("\t\t     WELCOME TO EVERYONE TO OUR NEW OUR GAME\n\n\n");
    //printf("\n\n");
    printf("\n\nTHERE ARE TWO LEVEL IN OUR GAME SO");
    printf("\n\nSOME COMMON RULE OF OUR GAME IS GIVEN ::\n\n");

    printf("1: IN THIS GAME PARTIPATE ONE  PLAYER ONLY BUT  HELPED BY MORE\n\n");
    printf("2: IN THE FIRST LEVEL YOU HAVE TO CORRECT TWO ANSWER.\n\n");
    printf("3: COMPLITING 2 RIGHT ANSWER YOU CAN ENTER IN LEVEL TWO OTHER WISE \"END\"\n\n");
    printf("4: IN LEVEL YOU WILL GET 100 DOLLAT PER RIGHT ANSWER\n\n");
    printf("5: FINISHING THE GAME YOU WILL GET YOUR SCORE\n\n\n");

    printf("\t\t    OUR GAME IS GOING TO START\n\n");

    for(a=0;a<player;a++)
    {
          printf("\n\nLEVEL ONE(1)::\n\n");
          if(player==1)
          {
                printf("\t\t     ENTER YOUR NAME (player)==");
                gets(name[a]);
                printf("WELCOME=%s",name[a]);
                printf("\n\n");
          }
          else
          {
                printf("\t\t     ENTER YOUR NAME (player no %d)==",a+1);
                gets(name[a]);
                printf("WELCOME=%s",name[a]);
                printf("\n\n");
          }
    }

}
*/
int main()
{

    int a,b,c,x,y,arr[8][8],i,j,sum=0,ch1[1][30],mark=3,permi=1;
    char chz;
    printf("\t\t     WELCOME TO EVERYONE\n\n");
    printf("   ENTER THE (A \\ B \\ C \\ D) WHAT DO YOU WANT TO DO FROM THE FOLLOWING TASK\n\n\n");
    printf("\tA> START\tB> SETTING PLAYER      C> HIGH SCHORE\t  D> EXIT\n\n");


    printf("\t\t\t     CHOSSE == ");
    ch=tolower(getchar());
    ans=answer(ch);

    switch(ans)
    {
    case 1:
        goto next;
    case 2:
        {
            player=play();
            printf("\n\nTHANKS FOR SETTING\n\n");
            printf("%d",player);
            break;
        }
    case 3:
        highscr();
        break;
    default:
        printf("\n\n\n\t\t\t\t    GOOD BYE");
        printf("\n\n\n\n");
        exit(0);
    }

    next:
    printf("\t\t     WELCOME TO EVERYONE TO OUR NEW OUR GAME\n\n\n");
    //printf("\n\n");

    printf("\n\nSOME COMMON RULE OF OUR GAME IS GIVEN ::\n\n");
    printf("\n\nTHERE ARE TWO LEVEL IN OUR GAME SO");
    printf("1: IN THIS GAME PARTIPATE ONE  PLAYER ONLY BUT  HELPED BY MORE\n\n");
    printf("2: IN THE FIRST LEVEL YOU HAVE TO CORRECT TWO ANSWER.\n\n");
    printf("3: COMPLITING 2 RIGHT ANSWER YOU CAN ENTER IN LEVEL TWO OTHER WISE \"END\"\n\n");
    printf("4: IN LEVEL YOU WILL GET 100 DOLLAT PER RIGHT ANSWER\n\n");
    printf("5: FINISHING THE GAME YOU WILL GET YOUR SCORE\n\n\n");

    printf("\t\t    OUR GAME IS GOING TO START\n\n");

    for(a=0;a<player;a++)
    {
          printf("\n\nLEVEL ONE(1)::\n\n");
          if(player==1)
          {
                printf("\t\t     ENTER YOUR NAME (player)==");
                gets(name[a]);
                printf("WELCOME=%s",name[a]);
                printf("\n\n");
          }
          else
          {
                printf("\t\t     ENTER YOUR NAME (player no %d)==",a+1);
                gets(name[a]);
                printf("WELCOME=%s",name[a]);
                printf("\n\n");
          }
    }


    return 0;

}
