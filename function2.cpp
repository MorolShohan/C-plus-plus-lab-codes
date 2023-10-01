#include<iostream>
#include<conio.h>
using namespace std;
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,3);
    subtraction(15,21);
    multiplication(21,27);
    division(50,15);

    cout<<"All functions have called"<<endl;

    getch();
}

void addition(int a,int b)
{
    int sum = a+b;
    cout<<"The sum is = "<<sum<<endl;
}
void subtraction(int a,int b)
{
    int subtraction = a-b;
    cout<<"The subtraction is = "<<subtraction<<endl;
}
void multiplication(int a,int b)
{
    int multiplication = a*b;
    cout<<"The multiplication is = "<<multiplication<<endl;
}
void division(int a,int b)
{
    float division = (float)a/b;
    cout<<"The division is = "<<division<<endl;
}


