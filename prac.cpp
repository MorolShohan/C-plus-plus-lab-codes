#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a-b;
}
int main()
{
    int a=5;
    int b=10;
    cout<<add(a,b);

    double m = 10.5;
    double n = 8.2;
    cout<<add(m,n);
}
