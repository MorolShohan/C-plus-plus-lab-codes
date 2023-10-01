#include<iostream>
using namespace std;

int main()
{
    int icecreamprice;
    bool ishot = true;


    cout<<"Enter your budget"<<endl;
    cin>>icecreamprice;
    cout<<"Enter state"<<endl;
    cin>>ishot;

    if(icecreamprice<50 && ishot == true )
    {
        cout<<"eat ice cream"<<endl;
    }
    else{
        cout<<"take filtered water"<<endl;
    }
}

