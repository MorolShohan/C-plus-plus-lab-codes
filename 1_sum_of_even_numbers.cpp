#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s, d, sum=0;
    cout<< "Enter first number: "<<endl;
    cin>>s;
    cout<< "Enter second number: "<<endl;
    cin>>d;

for (int i=s; i<d; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
            cout<<i<<endl;
        }
   }
   cout<< "the sum of even numbers between "<<s<< " and "<<d<< " is: " <<sum <<endl;
   getch();
}
