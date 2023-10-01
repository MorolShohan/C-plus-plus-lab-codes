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

};



int main()
{
    student Alim,Afrida,udoy;

    Alim.id = 101;
    Alim.gpa = 3.44;
    Alim.display();


    Afrida.id = 102;
    Afrida.gpa = 3.74;
    Afrida.display();

    udoy.id = 2043950;
    udoy.gpa = 3.94;
    udoy.display();



}
