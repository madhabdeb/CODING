#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void main()
{
int a[10];
int m=1,n,d,q,g,w,t=0,f=0,p,x,k,z,u,b=0,r,e,y=0;
char ch[21][10],cc[21];
char chh[21][10];
    char equall[17][2]={"=","=","=","=","=","=","=","=","=","=","=","=","=","=","=","=","="};
    char plass[17][5]={"+","+","+","+","+","+","+","+","+","+","+","+","+","+","+","+","+"};
    char divide[17][5]={"/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"} ;
    char mul[17][5]={"*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*"};
    char minuss[17][5]={"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"};
    printf("\n\t\t\t\t::CALCULATOR::\n\n");
    printf ("\t\t\t\t==============\n\n");
    for( ; ; )
    {


    for (m=1;m<=21;m++)
    {
        scanf("%s",ch[m]);
           n=m;
        d=strcmp(&equall[m][0],ch[m]);
        if (d==0)
            break;
      }
       printf ("\n");
      ////seriely  print
      ////seriely print
        // printf ("\t\t\t");
      for(m=1;m<=n;m++)
        printf("%s",ch[m]);

        ////convert  integer ;;
        for (m=1;m<n;m++)
        {
            a[m]=atoi(ch[m]);
        }
        ////count / or *;
        /*for (m=1;m<=n;m++)
        {
             g=strcmp(&divide[m][0],ch[m]);
            f=strcmp(&mul[m][0],ch[m]);
            u=strcmp(&plass[m][0],ch[m]);
            e=strcmp(&minuss[m][0],ch[m]);
            if(g==0||f==0||u==0||e==0)
            {
             ++t;
            break;
            }
        }
        //devide devidre
        //devide devid

        if (t>0)
         {*/
          for(m=1;n!=2;m++)
          {
              for(z=1;z<n;z++)
              {

                  g=strcmp(&divide[z][0],ch[z]);
                  if (g==0)
                  {
                      w=a[z-1]/a[z+1];
                     //printf ("\n\nmg=%d\n\n",w);
                      a[z-1]=w;
                    //cant assign;;;
                    //strset(ch[z-1],a[z-1]);
                      k=w;
                      p=x=z;
                     // printf ("\n\n%d%d%d",x,p,z);
                        for(p=x+2,q=x;p<=n;q+=2,p+=2)
                        {
                            //printf("\nma\n");
                           strcpy(chh[p-2],ch[p]);
                            strcpy(ch[p-2],chh[p-2]);
                            if (p!=n)
                            a[q+1]=a[q+3];


                                //printf ("%s",ch[3]);
                               // a[p-2]=a[p];
                        }

                        n=n-2 ;
                       // for(p=x;p<=n;p++)
                         //   {
                           // a[p]=atoi(ch[p]);
                         //printf ("\n\n\t%d",a[p]);
                           // }
                        break;

                  }
                  else
                  {
                      if(a[z]>0)
                      {
                         // printf ("\n\n%d",a[z]);
                      }
                      else
                        {
                     strcpy(chh[z],ch[z]) ;
                     strcpy(ch[z],chh[z]);
                   // a[z]=atoi(ch[z]);
                    // printf ("%d",a[z]);
                        }
                  }

              }
              if(m>n)
                break;
          }
          //for (r=1;r<=n;r++)
           //printf ("\n\n\t%d ",a[r]);

          //printf ("madhab");

          ////multiply muytiplyn
          //// multipyly mutiply,,
          for (m=1;n!=2;m++)
          {
              //printf ("as");
              for (z=1;z<n;z++)
              {
                  f=strcmp(&mul[z][0],ch[z]);
                  if(f==0)
                  {
                      w=a[z-1]*a[z+1];
                      a[z-1]=w;
                      k=w;
                      p=x=z;
                      for (p=x+2,q=x;p<=n;q+=2,p+=2)
                      {
                          strcpy(chh[p-2],ch[p]);
                          strcpy(ch[p-2],chh[p-2]);
                          if (p!=n)
                            a[q+1]=a[q+3];
                      }
                      n=n-2;
                      //for (p=x;p<=n;p++)
                      //{
                        //  a[p]=atoi(ch[p]);
                      //}
                          break;
                  }
                  else
                  {
                      if(a[z]>0)
                       ; //printf ("\n\t\t%d",a[z]);
                      else
                      {
                      strcpy(chh[z],ch[z]);
                      strcpy (ch[z],chh[z]);
                      }
                  }
              }
              if(m>n)
                break;

          }
         // printf("jadhab");
          ////addition  addtion ;;
          ////addition  addtion  ;;

           /*  for(m=1;n!=2;m++)
             {
                 //printf("we");
                 for (z=1;z<n;z++)
                 {
                     u=strcmp(&plass[z][0],ch[z]);
                     if (u==0)
                     {
                       w=a[z-1]+a[z+1];
                       a[z-1]=w ;
                       k=w;
                       p=x=z;
                       for (p=x+2,q=x;p<=n;q=q+2,p+=2)
                       {
                           strcpy(chh[p-2],ch[p]);
                           strcpy(ch[p-2],chh[p-2]);
                           if (p!=n)
                            a[q+1]=a[q+3];
                       }
                       n=n-2;
                      // for(p=x;p<=n;p++)
                       //{
                        //   a[p]=atoi(ch[p]);
                       //}
                           break;

                     }
                     else
                     {
                         if(a[z]>0)
                            printf ("\n\t%d",a[z]);
                         else
                         {
                         strcpy(chh[z],ch[z]);
                         strcpy(ch[z],chh[z]);
                         }
                     }
                 }
                 if(m>n)
                    break;
             }*/
             ////minuse minuse minuse
             ////minubse minyuse minuse;;

             for (m=1;n!=2;m++)
             {
                 for(z=1;z<n;z++)
                 {
                     e=strcmp(&minuss[z][0],ch[z]);
                     if(e==0)
                     {
                         w=a[z-1]-a[z+1];
                         a[z-1]=w;
                         k=w;
                         p=x=z;
                         for (p=x+2,q=x;p<=n;q+=2,p++)
                         {
                             strcpy(chh[p-2],ch[p]);
                             strcpy(ch[p-2],chh[p-2]);
                                if (p!=n)
                            a[q+1]=a[q+3];

                         }
                         n=n-2;
                         //for (p=x;p<=n;p++)
                         //{
                           //  a[p]=atoi(ch[p]);
                         //}
                         break;
                     }
                     else
                     {
                         if (a[z]>0)
                           ; //printf("\n%d",a[z]);
                         else
                            {
                         strcpy(chh[z],ch[z]);
                         strcpy(ch[z],chh[z]);
                            }
                     }
                 }
                 if(m>n)
                    break;
             }


             ////addition  addtion ;;
          ////addition  addtion  ;;

             for(m=1;n!=2;m++)
             {
                 //printf("we");
                 for (z=1;z<n;z++)
                 {
                     u=strcmp(&plass[z][0],ch[z]);
                     if (u==0)
                     {
                       w=a[z-1]+a[z+1];
                       a[z-1]=w ;
                       k=w;
                       p=x=z;
                       for (p=x+2,q=x;p<=n;q=q+2,p+=2)
                       {
                           strcpy(chh[p-2],ch[p]);
                           strcpy(ch[p-2],chh[p-2]);
                           if (p!=n)
                            a[q+1]=a[q+3];
                       }
                       n=n-2;
                      // for(p=x;p<=n;p++)
                       //{
                        //   a[p]=atoi(ch[p]);
                       //}
                           break;

                     }
                     else
                     {
                         if(a[z]>0)
                            ;//printf ("\n\t%d",a[z]);
                         else
                         {
                         strcpy(chh[z],ch[z]);
                         strcpy(ch[z],chh[z]);
                         }
                     }
                 }
                 if(m>n)
                    break;
             }
             ////total result
             ////total rersult

          printf ("%d\n\n\n",k);
          //gets(ttt);
         }
         }


        //devide devide denvide ;;
        /*for(m=1;m<n;m++)
           {
            g=strcmp (&divide[m][0],ch[m]);
                if(g==0)
                {
                    w=a[m-1]/a[m+1];
                    if(m+4<=n)
                    {
                        a[m+1]=w;
                    }
                }
           }
            //multiply multiply;;y
            for (m=1;m<n;m++)
            {
             g=strcmp(&mul[m][0],ch[m]);
                if (g==0)
                {
                    w=a[m-1]*a[m+1];
                    if(m+4<=n)
                    {
                        a[m+1]=w;
                    }
                }
            }

            // pluse plusep pluse ;

             for (m=1;m<n;m++)
                {
                    g=strcmp(&plass[m][0],ch[m]);
                    if (g==0)
                    {
                     w=a[m-1]+a[m+1];
                    if(m+4<=n)
                       {
                        a[m+1]=w;
                       }
                     }
                 }
                //minus  minus misnus ;

                 for (m=1;m<n;m++)
                 {
                    g=strcmp(&minuss[m][0],ch[m]);
                    if(g==0)
                    {
                        w=a[m-1]-a[m+1];
                        if (m+4<=n)
                        {
                            a[m+1]=w;
                        }
                    }

                 }
                  //make seriel;
                for (m=1;m<=n;m++)
                {
                 printf ("%s ",ch[m]);
                }
                printf ("%d",w);
                printf ("\n\n\n");*/





//}
