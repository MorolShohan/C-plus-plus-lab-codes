#include<iostream>
using namespace std;

int main()
{
    int a,b,c,arr[4] = {a=5,b=10,c=15};

    arr[4] ={&a, &b, &c};
    cout<<arr[1];

}
