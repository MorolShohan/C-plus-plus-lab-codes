#include<iostream>
using namespace std;

int main()
{
    int N,reversednumber=0,reminder;

    cout<<"Enter any number : ";
    cin>>N;

    while(N !=0){
        reminder =N%10;
        reversednumber= reversednumber*10 + reminder;
        N /=10;
    }
        cout<< "reversed number = "<<reversednumber;
    }

