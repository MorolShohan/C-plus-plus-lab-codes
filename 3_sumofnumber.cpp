#include<iostream>
using namespace std;
int main()
{
    int sum,n;
    cout<<"Enter number 1 : ";
    cin>>n;
    cout<<"Enter number 2 : ";
    cin>>n;
    cout<<"Enter number 3 : ";
    cin>>n;
    cout<<"Enter number 4 : ";
    cin>>n;

    for(int i=1; i<=4; i=i+1)
    {
        sum = sum + i;
    }

    cout<<"The sum of digits = "<<sum;

    return 0;

}
