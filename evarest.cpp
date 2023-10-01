#include<iostream>
using namespace std;

float kotogoj(float foot)
{
    int goj = foot/3;

    return goj;
}

float kotomile(float goj)
{
   float mile = goj/1760;
   return mile;
}

int main()

{
    int foot = 29029;
    float goj = kotogoj(foot);
    float mile =kotomile(goj);
    float height = mile;

    cout<<goj<<endl;
    //cout<<mile<<endl;
    cout<<height<<endl;
}


