#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"Enter any integer number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        factorial *=i;
    }

    cout<<"The factorial is " << n << " = " <<factorial;
}
