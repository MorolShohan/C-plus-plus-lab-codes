#include<iostream>
using namespace std;

class aiubcalling
{
private :
    string name;
    public :

    void setName(string x)
    {
        name =x;
    }
    string getName()
    {
        return name;
    }

};

int main()
{
    aiubcalling Shohan;
    Shohan.setName("Shohan");
    cout<<Shohan.getName();

}
