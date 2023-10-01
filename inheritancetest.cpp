#include<iostream>
using namespace std;

class person
{
public :
    void display1()
    {
        cout<<"I am a person "<<endl;

    }
};

class student : public person
{
    //display()
public :
    void display2()
    {

        cout<<"I am a student "<<endl;
        cout<<"I am a teacher "<<endl;
    }

};



int main()
{
   person p;
   p.display1();

   student s;
   s.display2();


}
