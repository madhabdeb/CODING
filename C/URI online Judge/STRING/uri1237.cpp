#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;



    int main()
{

    int a,b,c,arr[50],arr2[10][3],n,m,t,num,*p,i,x,y;
    char ch,ch1[10][100];
    float f;
    double d;
    string ss,sp,su,sub;
    vector<string>vs;
    vector<int>vi;
    y=0;

//............................................................//


    while(getline(cin,ss,'\n')&&getline(cin,sp,'\n'))
    {
        n=ss.size();
        m=sp.size();
        num=n<m?n:m;

        for(a=0;a<n;a++)
        {
            for(b=0;b<m;b++)
            {
                for(c=0;c<num;c++)
                {
                    if(ss[a+c]==sp[b+c])
                    {
                        x++;
                        su.push_back(ss[a+c]);
                        if(x>y)
                        {
                            y=x;
                            sub=su;

                        }

                    }
                    else
                    {
                        x=0;
                        su.clear();
                        break;
                    }
                }
            }
        }

     cout<<ss<<endl<<sp<<endl<<num<<endl<<y<<endl<<sub<<endl;
    }




     /*        */

    return 0;
}










