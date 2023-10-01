#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float m,h,BMI;

    //ask user for height and weight

    cout<<"Enter mass(in kilograms) : "<<endl;
    cin>>m;

    cout<<"Enter  height(in meters) : " <<endl;
    cin>>h;

    BMI = (m/(h*h));

    cout<< "Body mass index = "<<BMI<<endl;








    getch();
}
