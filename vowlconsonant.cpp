#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter any letter : ";
    cin>>ch;

    ch =  tolower(ch);

   switch(ch)

   {
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    cout<<"Vowel";
    break;

    default:
        cout<<"Consonant";
   }






}
