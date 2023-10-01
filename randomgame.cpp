#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){

    while(1)
    {
       int guessnumber,randomnumber;

    cout<<"Enter your guess between 1 to 5 : ";
    cin>>guessnumber;

    randomnumber = 1 + rand()%5;

    if(guessnumber==randomnumber)
        {
        cout<<"You have won"<<endl;

    }
    else{
        cout<<"You have lost. try again "<<endl;
        cout<<"Random number was :"<<randomnumber;
    }
    }

    getch();


}
