#include<iostream>
using namespace std;


class person
{
public :
    string name;
    int age;

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};

class student : public person
{
   //name,age,display 1()
   public :
       int id;

       void display2()
       {
            cout<<"id : "<<id<<endl;
           display();
       }

};
int main()
{
    student s1;
    s1.id =101;
    s1.name = "Shohan";
    s1. age = 22;
    s1.display2();

}
