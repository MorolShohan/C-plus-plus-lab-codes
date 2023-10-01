#include<iostream>
using namespace std;

class MyInfo
{
    public :

    int age;
    double id;

    void display()
    {
        cout << age << "  "<<id<<endl;
    }

        MyInfo(int x, double y)
        {
            age = x;
            id = y;
        }

        MyInfo()
        {
            cout<<"Default constructor "<<endl;
        }
};



int main()
{
    MyInfo Alim(101,3.44);
    Alim.display();

    MyInfo Afrida(102,3.75);
    Afrida.display();

    MyInfo ob;





}

