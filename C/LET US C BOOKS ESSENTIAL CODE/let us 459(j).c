#include <stdio.h>
#include <math.h>
void main()
{
int num,lim,liw,tolit,men,ilim,iliw,wmen;
    scanf ("%d",&num);
    men=num*52/100;
    wmen=num-men;
    printf ("total man=%d\ntotal women=%d\n\n",men,wmen);
    tolit=num*48/100;
    lim=tolit*35/100;
    liw=tolit-lim;
    printf ("literate men=%d \nliterate women=%d\n\n",lim,liw);
    iliw=wmen-liw;
    ilim=men-lim;
    printf("iliterate women=%d\niliterate man=%d\n\n",iliw,ilim);
}
