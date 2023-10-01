#include<iostream>
using namespace std;

class a
{
private:
    int id = 101;
    string name = "Shohan";

public:
    friend class b;

};
class b
{
public:
    void display(a ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.name<<endl;
    }
};

int main()
{
    a ob1;
    b ob2;

    ob2.display(ob1);
}
