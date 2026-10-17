#include "Smartphone.h"

Smartphone::Smartphone(std::string Brand, int OwnPhoneNumber, int BatteryCapacity, float ElectricityConsumption) :
	Brand(Brand), Phone(OwnPhoneNumber, ElectricityConsumption), Calculator(BatteryCapacity, ElectricityConsumption), Electronics(ElectricityConsumption)
{
	std::cout << "Smartphone Construction!" << std::endl;
}

void Smartphone::PrintBrand()
{
	std::cout << "Smartphone Brand: " << Brand << std::endl;
}

void Smartphone::PhoneTo(int PhoneNumber)
{
	std::cout << "Smartphone Phone to Number: " << PhoneNumber << std::endl;
}

void Smartphone::PrintOwnPhoneNumber()
{
	std::cout << "Smartphone OwnPhoneNumber: " << OwnPhoneNumber << std::endl;
}

void Smartphone::PrintSum(int a, int b)
{
	std::cout << "Smartphone: " << a << " + " << b << " = " << a + b << std::endl;
}

void Smartphone::PrintBatteryCapacity()
{
	std::cout << "Smartphone BatteryCapacity: " << BatteryCapacity << std::endl;
}

void Smartphone::PrintDescription()
{
	std::cout << "Smartphone Description() override;" << std::endl;
}

void Smartphone::PrintElectricityConsumption()
{
	std::cout << "Smartphone ElectirityConsumption: " << ElectricityConsumption << std::endl;
}

Smartphone::~Smartphone()
{
	std::cout << "Smartphone Destruction!" << std::endl;
}