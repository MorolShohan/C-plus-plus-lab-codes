#include<iostream>
#include<conio.h>
using namespace std;

int x = 10; //global variable

int main()
{
    int x = 50;//local variable
    cout<<"inside the main function x = "<< :: x<<endl;

    getch();

}
