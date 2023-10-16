#include "Transport.h"

Car::Car(std::string ft, std::string m, int y) : fuelType(ft), Transport(m, y)
{}

void Car::print()
{
	std::cout << "Fuel Type: " << fuelType << std::endl;
	Transport::print();
}

std::string Car::getFuelType()
{
	return fuelType;
}
