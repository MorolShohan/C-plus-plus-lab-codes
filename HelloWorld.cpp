#include<iostream>
using namespace std;

 int main ()
{

    int x,y;
    x =2020;
    x++;
    y = x++;
    y = x;
    y++;
    --x;
    --x;

    cout<<x<<" ";
    cout<<y;
    return 0;

}
