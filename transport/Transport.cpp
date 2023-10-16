#include "Transport.h"

Transport::Transport(std::string m, int y) : model(m), year(y)
{}

std::string Transport::getModel()
{
	return model;
}

int Transport::getYear()
{
	return year;
}

void Transport::print()
{
	std::cout << "Model: " << model << std::endl;
	std::cout << "Year: " << year << std::endl;
}
