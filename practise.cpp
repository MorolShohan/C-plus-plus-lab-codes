#include<iostream>
using namespace std;


int main()
{
    int n;
    int factorial=1;

    cout<<"Enter any positive number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
    factorial*=i;
    }
    cout<<"Factorial is"<<n<<" = "<<factorial;

}
