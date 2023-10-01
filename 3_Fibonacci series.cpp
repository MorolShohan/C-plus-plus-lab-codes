
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int first =0,second=1,count=0,sum=0,n;
    cout<< "Your input is : ";
    cin>>n;
    while (count<n)

    {
        if(count<=1)
        {
            sum=count;
        }
        else
        {
            sum=first+second;
            first=second;
            second=sum;
        }
        cout<<sum<<" ";
        count=count+1;
    }
}
