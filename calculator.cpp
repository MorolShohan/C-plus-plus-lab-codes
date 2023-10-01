#include<iostream>
using namespace std;
float operations(float a,float b)
{
    cout<<"Press 1 for +"<<endl;
    cout<<"Press 2 for -"<<endl;
    cout<<"Press 3 for *"<<endl;
    cout<<"Press 4 for /"<<endl;
    int n;//declare variable for switch statement
    cin>>n;
    switch(n)
    {
    case 1:
        {
           return a+b;
        }
        break;
    case 2:
        return a-b;
        break;
    case 3:
        return a*b;
        break;
    case 4:
        {
          return a/b;
        }

    }
}
int main()
{
    float num1,num2;
    cout<<"Enter value for num1 : "<<endl;
    cin>>num1;
    cout<<"Enter value for num2 : "<<endl;
    cin>>num2;

float    store=operations(num1,num2);//function calling and storing in store variable

    cout<<"Result is : "<<store;
}
