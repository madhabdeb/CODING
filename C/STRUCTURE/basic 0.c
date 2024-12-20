#include <stdio.h>
void main ()
{
int a;
struct bio
    {
      char name[20];
      char add[50];
      int age ;
      int tall;
    }madhab;
   // struct bio madhab;
    a=sizeof (madhab);
    printf ("%d",a);
    printf("\n\n%d",sizeof(madhab));
    madhab. age=21;
    madhab. tall=5;
    printf ("\n%d\n%d",madhab.age,madhab.tall);
    printf ("\n\n\n\n\n\n");




    struct date
    {
     int d;
     int m;
     int y;
    }apu,sati={4,6,1967};
    //struct date sati={3,5,1995};
    //scanf("%d%d%d",& sati.d,& sati.m,& sati.y);
    apu=sati;
    printf ("the birth date of seti is=%d/%d/%d",sati.d,sati.m,sati.y);
    apu.m=9;
    printf ("\n\n%d-%d-%d",apu.d,apu.m,apu.y);
printf("\n\n\n");
printf("100 student bio data is given below\n\n");
    /*(struct dof
        {
            int d;
            int m;
            int y;
        }bir;*/
struct biodata
    {
        char na;
        int roll;
        int age ;
        int cla;
        char sect;
        struct dof
        {
            int d;
            int m;
            int y;
        }bir;
        //struct dof bir;
    }student[100];

   for (a=0;a<100;a++)
    {
        printf ("STUDENT(%d):\n\n",a+1);
        printf  ("NAME:");
        scanf ("%c",&student[a].na);
        printf ("ROLL:");
        scanf ("%d",&student[a].roll);
        printf ("AGE:");
        scanf ("%d",&student[a].age );
        printf ("CLASS:");
        scanf ("%d",&student[a].cla);
        printf ("SECTION:");
        //scanf ("%c",&student[a].sect);
        scanf ("%c",&student[a].sect);
        printf ("DATE OF BIRTH :");
        scanf ("%/d%d/%d", & student[a].bir.d,&student[a].bir.m,&student[a].bir.y);
        //scanf ("%d",&student[a].bir.m);
        printf("\n\n");
    }
        printf("%d",sizeof student);
        printf ("\n\n%d",sizeof (struct biodata));

}
