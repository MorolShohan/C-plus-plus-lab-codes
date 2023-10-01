#include<iostream>
using namespace std;

int addition(int,int);


int main()
{
   int result = addition(10,20);
   cout<<"The sum is = "<<result;
}

int addition(int a, int b)
{
     int sum = a+b;
     return sum;
}
