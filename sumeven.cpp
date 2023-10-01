#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the last number : ";
    cin>>n;

    for(int i=2; i<=n; i=i+2)
    {
        sum = sum + i;
    }

    cout<<"The sum of digits = "<<sum;

}
