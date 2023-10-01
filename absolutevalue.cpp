#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter an integar : ";

    cin>>number;

    if (number<0)
    number = -number;

    cout<<"The absolute value is"<< " "<<number;
    return 0;

}
