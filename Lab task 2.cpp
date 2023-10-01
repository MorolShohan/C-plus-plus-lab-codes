#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public :
    void display()
    {
      cout<< "I'm person"<<endl;
    }

};


class employee : public person //inheritance//
{
public :
    void display()
    {
      cout<< "I am an Employee"<<endl;
    }

};


class student : public person //inheritance//
{
public :
    void display()
    {
      cout<< "I am a Student"<<endl;
    }

};


class Scholarshipstudent : public student //inheritance//
{
public :
    void display()
    {
      cout<< "I am a Scholarship Student"<<endl;
    }

};


class Faculty : public employee
{
public :
    void display()
    {
      cout<< "I am a Faculty"<<endl;
    }

};


class Officer : public employee //inheritance//
{
public :
    void display()
    {
      cout<< "I am an Officer"<<endl;
    }

};


int main()
{

    student s1;
    s1.display();

    employee e1;
    e1.display();

    Scholarshipstudent ss1;
    ss1.display();

    Faculty f1;
    f1.display();

    Officer o1;
    o1.display();


 getch;
}

