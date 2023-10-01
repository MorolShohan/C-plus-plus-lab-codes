#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char name1[] = "Shohan Morol ";
    char name2[13]=;

       int len = strlen(name1);

       cout<<"Length of string " <<len<<endl;

       strcpy(name2,name1);
       cout<<"Name 2 = "<<name2<<endl;

       strcat(name1,name2);
       cout<<name1;







    getch();
}
