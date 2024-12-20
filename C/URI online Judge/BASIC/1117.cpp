#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    float a,b,c;
    b=0;
    a=0;
    while(true)
    {
        cin>>c;
        if(c<0||c>10)
        {
         cout << "nota invalida\n";
        }
        else
        {
         b+=1;
         a+=c;
         if(b==2)
         {
         cout <<"media = "<<a/2<<"\n";
         }
        }
    }

}
