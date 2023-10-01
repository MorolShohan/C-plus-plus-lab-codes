#include<iostream>
using namespace std;

class aiubcalling
{
public :
    string name;

    aiubcalling(string name)
    {
        this -> name = name;
    }

    void display()
    {
        cout<<name<<endl;
    }


};

int main()
{
    aiubcalling s1("Shohan");
    s1.display();
}


