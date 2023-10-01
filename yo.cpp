#include<iostream>
using namespace std;

class A
{
private:
    int roll = 101;
    char sec = 's';


public:
    friend class B;
};
class B
{
public:
    void display(A ob)
    {
        cout<<ob.roll<<endl;
        cout<<ob.sec<<endl;
    }
};

int main()
{
    A ob1;
B ob2;
ob2.display(ob1);
}



