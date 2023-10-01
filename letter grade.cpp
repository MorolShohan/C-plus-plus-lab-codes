#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark,grade,cgpa;
    char B,course_drop;

    cout<<"Enter your mark: ";
    cin>>mark;

    cout<<"Enter your cgpa : ";
    cin>>cgpa;
    cout<<"Enter your grade : ";
    cin>>grade;

    if(cgpa>3.75 && grade>=B+){
        cout<<"Invalid mark";
    }
    else if(mark<0){
        cout<<"Invalid mark";
    }
    else if(mark>=80){
        cout<<"A+";
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
    else{
        cout<<"Fail"<<endl;
        cout<<"Best of luck you fucking noob";
    }

    getch();
}
