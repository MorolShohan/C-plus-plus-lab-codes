#include<iostream>
using namespace std;

class student
{
    public :

    int id;
    double gpa;

    void display()
    {
        cout << id << "  "<<gpa<<endl;
    }

    void setValue(double x, double y)
    {
        id = x;
        gpa = y;
    }


};



int main()
{
    student Alim,Afrida;
    Alim.setValue(101,3.44);


    Alim.display();


    Afrida.setValue(102,3.74);

    Afrida.display();




}
