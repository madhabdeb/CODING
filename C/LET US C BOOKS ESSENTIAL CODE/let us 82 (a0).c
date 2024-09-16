#include <stdio.h>
void main ()
{
    int costp,selp;
    printf ("enter the cost price and selling price of an item\n\n ");
    scanf ("\n%d\n %d",&costp,&selp);
    costp<selp?printf("made profit%d",selp-costp):printf("made ioss=%d",costp-selp);







}
