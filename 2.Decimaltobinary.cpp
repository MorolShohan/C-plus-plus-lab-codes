#include <iostream>
using namespace std;

int main()
{

int a[10], n, i;
cout<<"Input a decimal Number : ";
cin>>n;

for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}

cout<<"The Binary Number is : ";

    i=i-1;
do
{
cout<<a[i];
    i--;

}while(i>=0);

    return 0;
}
