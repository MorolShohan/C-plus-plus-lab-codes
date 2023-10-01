#include <iostream>
using namespace std;
int main()
{
   int x,y, sum=0;
   cout<< "Input a number: ";
   cin>>x;
    y=x;

   do
   {
       sum = sum+y % 10;
       y= y/10;

   }while ( y!= 0);

    cout<< "The sum of digits of "<< x <<" is : "<< sum<<endl;

    return 0;
}
