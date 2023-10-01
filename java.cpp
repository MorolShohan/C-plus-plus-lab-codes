#include<iostream>
using namespace std;

 class person
{
public :

    int id;
    string name;

    void print()
    {
        cout << id << "   " << name <<endl;
    }

    person()
    {
        cout<<"Constructor is called "<<endl;
    }

    person(int i,string n)
    {
        id = i;
        name = n;
    }


};

int main()
{
    person Shohan(20440382,"Morol");
    Shohan.print();


}
