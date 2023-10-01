#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int age;

   ofstream file;
   file.open("Student_details.txt",ios::out|ios::app);

   for(int i; i<=3; i++)
   {
        cout<<"Enter your name : ";
   getline(cin,name);
   file<<name<<" ";

   cout<<"Enter your age : ";
   cin>>age;
   file<<age<<endl;
   cin.ignore();
   }

   file.close();



}
