 #include <stdio.h>
void madhab (int *w,int *q);
void main ()
{
    int a,b=5,*c,*n,f,*u,g,m[5]={1,3,5,7,9};
    c=&b;
    a=*c;
    printf("a=%d a=%x b=%d b=%x c=%x c=%d",a,&a,b,&b,c,*c);
    printf ("\n\n\n\n\n\n");

    n=m;
    printf("%x  %d\n",n,*n);
    a=*n++;
    printf("%d %x",a,n);
    printf ("\n\n%x",n);
    a=*++n;
    printf("\n%d  %x",a,n);
    a=++*n;
    printf("\n%d %x",a,n);
    printf ("\n\n\n\n");

    int *y,s;
    y=&s;
     *y=18;
     printf ("%d",*y);
     printf ("\n\n\n\n\n\n\n\n\n");

     int l=6,k=5;
     madhab (l,k);
     printf ("%d %d\n\n",l,k);

     printf ("\n\n\n\n\n\n\n");

    scanf("%d",&g);
    f=g;
    u=&g;
    for(*u=1;*u<=10;*++u)
    {
        printf("\n\n%d*%d=%d\n",f,*u,f**u );
    }

}

void madhab (int *w,int *q)
    {
        printf ("%d  %d\n\n",*w,*q);
        *w=100;
        *q=200;

    }
