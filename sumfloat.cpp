#include<iostream>
using namespace std;
int main()
{
    float sum=0,n;
    cout<<"Enter the last  number : ";
    cin>>n;

    for(int i=1.5; i<=n; i=i+1)
    {
        sum = sum + i;
    }

    cout<<sum;

}
