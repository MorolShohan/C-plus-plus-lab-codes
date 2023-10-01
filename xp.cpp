#include<iostream>
using namespace std;
int main()
{
    string name;
    int pass;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your password"<<endl;
    cin>>pass;

    if(pass==1234)
    {
        cout<<"welcome : "<<name;

    }
    else
    {
        cout<<"Sorry try again"<<endl;
    }
    return 0;
}
