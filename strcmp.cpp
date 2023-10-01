#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="Shohan";
    char name2[]="Shohan";

    int value = strcmp(name1,name2);

    if(value==0)
        cout<<"Strings are equal";
    else
            cout<<"Strings are not equal";
}

