#include <iostream>
#include "Transport.h"

using namespace std;

int main() 
{
	Transport* obj = nullptr;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		obj = new Car();
		break;
	case 2:
		obj = new Motorcycle();
		break;
	case 3:
		obj = new Airplane();
		break;
	case 4:
		obj = new Ship();
		break;
	case 5:
		obj = new Tram();
		break;
	default:
		break;
	}
	obj->print();
}