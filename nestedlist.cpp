#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;

    cout<<"Enter your mark: ";
    cin>>mark;

    if(mark>32){

    if(mark>100){
        cout<<"Invalid mark"<<endl;

    }
    else if(mark<0){
        cout<<"Invalid mark";
    }
    else if(mark>=80){
        cout<<"A+"<<endl;
        cout<<"Well done madafaka";
    }
    else if(mark>=70){
        cout<<"A";
    }
    else if(mark>=60){
        cout<<"B";
    }
    else if(mark>=50){
        cout<<"C";

    }else if(mark>=33){
        cout<<"D";
    }
    }else{
        cout<<"Fail"<<endl;
        cout<<"Best of luck you fucking noob";
    }

    getch();
}

