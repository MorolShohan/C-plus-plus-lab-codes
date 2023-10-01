#include <iostream>
using namespace std;

class store
{
public:
    string name;
    int items;
    Store(string name);
	this->name = name;
	this->items = [];
}

void IsItemAvailable(name)
{
	int itemIndex = this.items.indexof(name);
	if(itemIndex == -1)
	{
		return false;
	}

	else

	{
		reutrn true;
	}
}

void additem(name)
{
	this.items.push(name);
}

int main()
{
	int Auctor = new store("AUCTOR");
	Auctor.additem("Shirt");
	Auctor.additem("Pant");

	Auctor.IsItemAvailable("Shirt");
}
