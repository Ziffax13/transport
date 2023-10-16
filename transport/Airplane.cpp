#include "Transport.h"

Airplane::Airplane(std::string ft, std::string m, int y) : fuelType(ft), Transport(m, y)
{}

void Airplane::print()
{
	std::cout << "Fuel Type: " << fuelType << std::endl;
	Transport::print();
}

std::string Airplane::getFuelType()
{
	return fuelType;
}
