#include<iostream>
using namespace std;
class Cellphone
{
private:
string MobileOwnerName = "Sohan Morol Sultan";
string mobileNumber = "0162*******";
int Balance = 1200;
string MobileOSName = "Iphone";
string LockStatus = "True";
public:
void details()
{
cout << "cell phone details are: " << endl;
cout << "Mobile Owner Name: " << MobileOwnerName << endl;
cout << "Mobile Number: " << mobileNumber << endl;
}
void cellNumber()
{
cout << "Balance: " << Balance << endl;
cout << "Mobile OS Name: " << MobileOSName << endl;
cout << "Lock Status: " << LockStatus << endl;
}
};
int main() //main function
{
Cellphone obj; // defining an object of type Cellphone
obj.details(); // call method details() of class
obj.cellNumber(); // call method cellNumber() of class
return 0;
}
