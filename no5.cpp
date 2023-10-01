#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of student : ";
    cin>>n;

    int stut[n];

    for(int i=0; i<n; i++)
    {

        cout<<"Enter marks"<<i+1<<" = ";
        cin>>stut[i];

    }

    int min = stut[0];
    for(int i=1;i<n;i++)
    {
        if(min>stut[i])
        {
            min> stut[i];
        }
    }
    cout<<"Lowest number +"<<min;
}
