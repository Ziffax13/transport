#include <iostream> 

class Transport
{
	std::string model;
	int year;
public:
	Transport() = default;
	Transport(std::string, int);
	virtual std::string getModel();
	int getYear();
	virtual void print();
};

class Car :public Transport
{
	std::string fuelType;
public:
	Car() = default;
	Car(std::string, std::string, int);
	virtual void print();
	std::string getFuelType();
};

class Motorcycle :public Transport
{
	std::string fuelType;
public:
	Motorcycle() = default;
	Motorcycle(std::string, std::string, int);
	virtual void print();
	std::string getFuelType();
};

class Airplane :public Transport
{
	std::string fuelType;
public:
	Airplane() = default;
	Airplane(std::string, std::string, int);
	virtual void print();
	std::string getFuelType();
};

class Tram :public Transport
{
	std::string fuelType;
public:
	Tram() = default;
	Tram(std::string, std::string, int);
	virtual void print();
	std::string getFuelType();
};

class Ship :public Transport
{
	std::string fuelType;
public:
	Ship() = default;
	Ship(std::string, std::string, int);
	virtual void print();
	std::string getFuelType();
};







