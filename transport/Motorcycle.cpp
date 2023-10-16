#include "Transport.h"

Motorcycle::Motorcycle(std::string ft, std::string m, int y) : fuelType(ft), Transport(m, y)
{}

void Motorcycle::print()
{
	std::cout << "Fuel Type: " << fuelType << std::endl;
	Transport::print();
}

std::string Motorcycle::getFuelType()
{
	return fuelType;
}
#include "Motorcycle.h"
