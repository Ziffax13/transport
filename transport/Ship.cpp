#include "Transport.h"

Ship::Ship(std::string ft, std::string m, int y) : fuelType(ft), Transport(m, y)
{}

void Ship::print()
{
	std::cout << "Fuel Type: " << fuelType << std::endl;
	Transport::print();
}

std::string Ship::getFuelType()
{
	return fuelType;
}
