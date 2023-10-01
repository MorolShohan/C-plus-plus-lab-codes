#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    if(num%2==0)
        cout<<"This is an even number";
    else{
        cout<<"Odd number";
        return 0;
    }
}
