
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int c,d,sum=1;
    cout<< "Enter any number: "<<endl;
    cin>>c;
for (int i=1; i<=c; i++)
    {
        sum=sum*i;
    }

   cout<< "the Factorial of " <<c<< " is: "<<sum <<endl;
   getch();
}

