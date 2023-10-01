#include<iostream>
using namespace std;
int main()
{
    int n,sum;

    cout<<"Enter number of students : ";
    cin>>n;

    int students[n];

     for(int i=0; i<n; i++){
    cout<<"Marks for student "<<i+1<<" = ";
      cin>> students[i];
      sum = sum+students[i];
    }

    cout<<"Total marks : "<<sum<<endl;

    float avg = (float) sum/n;
    cout<<"Average marks : "<<avg<<endl;
}
