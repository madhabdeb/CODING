#include<iostream>
using namespace std;
int main(){

    float a,b;
    a=0;
    while(a<=2.1)
    {
        cout<<"I="<<a<<" "<<"J="<<a+1<<"\n";
        cout<<"I="<<a<<" "<<"J="<<a+2<<"\n";
        cout<<"I="<<a<<" "<<"J="<<a+3<<"\n";
       a+=.2;
    }
}
