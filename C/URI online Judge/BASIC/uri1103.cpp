#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;


int main()
{

    int a,b,num,h1,h2,m1,m2,m,h,p;


//............................................................//



    cin>>h1;
    cin>>m1;
    cin>>h2;
    cin>>m2;
    m=h=0;

  //  m=(m1>m2?(m2+60-m1):m2-m1);
    if(m2>=m1)
    {
        m=m2-m1;
        p=0;
    }
    else
    {
        m=m2+60-m1;
        p=1;
    }

   if(h2>h1)
    {
        h=h2-h1-p;

    }
    else if(h2==h1)
    {
        h=h2-h1==0?24-p:0;

    }
    else
    {
        h=(h2+24)-h1-p;
    }

    cout<<(h*60+m)<<endl;



     /*        */

    return 0;
}
