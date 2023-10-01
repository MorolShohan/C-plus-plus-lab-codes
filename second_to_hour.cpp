#include<iostream>
using namespace std;
double secondtohour(int seconds)
{
 int minutes = seconds/60;
int hour = minutes/60;
cout<<hour<<endl;
return hour;
}


int main()
{
    secondtohour(7200);
}
