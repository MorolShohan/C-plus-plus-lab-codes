#include<iostream>
using namespace std;

int jogkor(int chalerdam, int dalerdam)
{
    int jogfol = chalerdam+dalerdam;

    return jogfol;
}


int duigunkor(int duigun)
{
    int goonkor = duigun * 2;

    return goonkor;
}

int dharde(int dharamount)
{
    int friendertaka = dharamount;

    return friendertaka;

}

int main()
{
    int chalerdam = 50;
    int dalerdam = 100;

    int total = jogkor(chalerdam,dalerdam);
    int dharlagbe = duigunkor(total);
    int takapaisi = dharde(dharlagbe);
    cout<<takapaisi<<endl;
    //cout<<dharlagbe<<endl;

}
