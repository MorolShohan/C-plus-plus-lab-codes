#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter number 1 : ";
    cin>>num1;

    cout<<"Enter number 2 :";
    cin>>num2;

    if(num1%2==0 && num2%2==0){
        cout<<"Both Number is Even" <<endl;
    }

    else if(num1%2==0 && num2%2!=0){
        cout<<"Number 1 is Even and  Number 2 is odd"<<endl;
    }

     else if(num1%2!=0 && num2%2==0){
        cout<<"Number 1 is Odd and Number 2 is Even";
    }

     else{
        cout<<"Both number is even number"<<endl;
    }

    if(num1>num2){
        cout<<" maximum number : "<<num1;
    }

    else{
        cout<<" maximum number : "<<num2;
    }






    getch();
}

