#include <iostream>

using namespace std;
int main(){

   int a,b,i;

     cout<< "Starting value: ";
     cin >> a;

     cout << "Ending value: ";
     cin >> b;
     cout<<endl;

   for (i= a;i <= b; i++){

        if(i % 2 !=0)
        {
            cout<<i<< " "<<endl;
        }
        else
        {

            cout<<"EVEN NUMBER"<<endl;
        }




}

           cout<<"Not valid"<<endl;

           return 0;

}


