#include<iostream>
using namespace std;

float kotogoj(float foot)
{
    float goj = foot/3;
    return goj;
}

float kotomile(float goj)
{
    float mile = goj/1760;
    return mile;
}

int main()
{
    float foot;
    cout<<"INPUT FOOT"<<endl;
    cin>>foot;

float gojerman = kotogoj(foot);
float milerman = kotomile(gojerman);
float manberkorsi = milerman;
cout<<milerman;
}

