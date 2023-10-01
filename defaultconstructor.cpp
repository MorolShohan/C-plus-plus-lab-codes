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

        student(int x, double y)
        {
            id = x;
            gpa = y;
        }

        student()
        {
            cout << "Default constructor"<<endl;
        }
};



int main()
{
    student ob;


    student Alim(101,3.44);
    Alim.display();

    student Afrida(102,3.75);
    Afrida.display();




}


