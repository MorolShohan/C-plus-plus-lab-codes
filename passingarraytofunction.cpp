#include<iostream>
#include<conio.h>
using namespace std;

void displayarray(int num[], int size)
{
    for(int i=0;i<=4;i++)
        cout<<num[i]<<" ";
}

int main()
{
    int number[5] = {10,20,20,20,50};
    displayarray(number,5);



}
