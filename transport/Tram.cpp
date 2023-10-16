#include "Transport.h"

Tram::Tram(std::string ft, std::string m, int y) : fuelType(ft), Transport(m, y)
{}

void Tram::print()
{
	std::cout << "Fuel Type: " << fuelType << std::endl;
	Transport::print();
}

std::string Tram::getFuelType()
{
	return fuelType;
}
