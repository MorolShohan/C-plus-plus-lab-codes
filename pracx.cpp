#include<iostream>
using namespace std;

class aiub
{
    public:
    int id;
    string name;
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"id "<<id<<endl;


    }
};

class mubc : public aiub
{
public:
    char sec;
    void display2()
    {
        cout<<"sec : "<<sec<<endl;
        display1();
    }


};
int main()
{
    mubc m;
    m.id = 101;
    m.sec ='o';
    m.name ="Shohan";
    m.display1();
}
