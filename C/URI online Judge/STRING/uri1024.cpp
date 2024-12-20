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

    int a,b,arr[50],arr2[10][3],n,t,num,p,i,x;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;

//............................................................//

    getline(cin,ss,'\n');
    n=ss.size();
    b=n/2;
    for(a=0;a<n;a++)
    {
      if(a<b)
      {
          sp[a]=ss[a]-1;
          p=1;
      }
      else
      {
          p=0;
      }

       if(ss[a]>=65&&ss[a]<='Z'||ss[a]>='a'&&ss[a]<='z')
        {
            sp[a]=ss[a]+3-p;
        }
        else
        {
            if(a>=b)
            {
                sp[a]=ss[a];
            }
        }

    }



    cout<<ss<<endl;

    for(a=n-1;a>=0;a--)
    {
        cout<<sp[a];
    }




     /*        */

    return 0;
}
