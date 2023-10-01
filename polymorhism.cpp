#include<iostream>
using namespace std;

class person
{
public:
    virtual void display()
    {
        cout<<"i AM  A PERSON "<<endl;
    }
};

class student : public person
{
public :
    void display()
    {
        cout<<"i AM  A PERSON "<<endl;

    }
};

class teacher : public person
{
public :
    void display()
    {
        cout<<"I am a teacher";
    }
};
int main()
{
    teacher t;
    student s;
    person *p;
    p = &s;
    p -> display();


    p = &t;
    p -> display();


}
