#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public :
    void display()
    {
      cout<< "I am a person"<<endl;
    }

};

class employee : public person //inheritance//
{
public :
   virtual void display()
    {
      cout<< "I am an Employee"<<endl;
    }

};

class student : public person //inheritance//
{
public :
   virtual void display()
    {
      cout<< "I am a Student"<<endl;
    }

};


class TA : public student, public employee //inheritance//
{
public :
    void display()
    {
      cout<< "I am a TA"<<endl;
    }

};

class ScholarshipStudent : public student //inheritance//
{
public :
    void display()
    {
      cout<< "I am a ScholarshipStudent"<<endl;
    }

};

class Faculty : public employee //inheritance//
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

    student s1,*s2,*s3;
    s1.display();

    employee e1,*e2,*e3;
    e1.display();

    TA ta1;
    ta1.display();

    ScholarshipStudent ss1;
    ss1.display();

    Faculty f1;
    f1.display();

    Officer o1;
    o1.display();

    cout<<endl;


    TA ta2;
    s2 = &ta2;
    s2 ->display();


    TA ta3;
    e2 = &ta3;
    e2 ->display();

getch;
}

