#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);




int main()
{
    addition(10,20);
    subtraction(20,56);
    multiplication(50,56);
    division(60,56);

    cout<<"All functions have called";

    getch();
}
void addition(int a,int b)
{
    int sum = a+b;
    cout<<"sum = "<<sum<<endl;
}
void subtraction(int a,int b)
{
    int result = a-b;
    cout<<"subtraction = "<<result<<endl;
}
void multiplication(int a,int b)
{
    int result = a*b;
    cout<<"multiplication = "<<result<<endl;
}
void division(int a,int b)
{
    float result =(float)a/b;
    cout<<"division = "<<result<<endl;
}




