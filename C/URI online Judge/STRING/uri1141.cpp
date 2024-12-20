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

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,j,x;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs,vss;
    vector<int>vi;
    map<string,int>mp;
    j=0;

    sp='\0';
//............................................................//

    while(cin>>n&&n)
    {
        ch=getchar();
        for(a=0; a<n; a++)
        {
            getline(cin,ss,'\n') ;
            vs.push_back(ss);
            ss.clear();
        }





         for(a=0;a<n;a++)
        {
            for(b=a;b>0;b--)
            {
               num=vs[b]>vs[b-1]?vs[b].size():vs[b-1].size();
               cout<<num<<endl;

                for(i=0;i<num;i++)
                {
                    cout<<"ma"<<endl;
                    if(vs[b][i]==vs[b-1][i])
                    {
                        sp.push_back(vs[b][i]);
                    }
                    else
                    {
                        if(sp.empty())
                        {
                         mp[sp]++;
                         vss.push_back(sp);
                        }
                        else
                        {
                            sp.clear();
                            break;
                        }

                    }
                }

            }
        }

        t=vss.size();
        cout<<t<<endl;
            for(a=0;a<t;a++)
            {
              cout<<vss[a]<<"     "<<mp[vss[a]]<<endl;

            }




    }





    /*        */

    return 0;
}

