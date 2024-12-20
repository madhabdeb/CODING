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

using namespace std;


int main()
{

    int a,b,arr[50],arr2[10][3],n,t,num,i,x;
    char c,ch[300],ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;

  multimap<string,string>mms;


//............................................................//
    cin>>n;
    for(a=0;a<7;a++)
    {
        cin>>ss>>sp;
        cout<<ss<<endl<<sp<<endl;

      //  mms[ss]=sp;       //PAIR MUST BE USE//
       mms.insert(pair<string, string>(ss,sp));

        ss.clear();
        sp.clear();
    }

       multimap<string,string>::iterator p=mms.begin();
        multimap<string,string>::iterator q=mms.end();


        while(p!=q)
        {

            cout<<p->first<<"   "<<p->second<<endl;
        }


    return 0;
}
