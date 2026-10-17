#include "Phone.h"

Phone::Phone(int OwnPhoneNumber, float ElectricityConsumption) : OwnPhoneNumber(OwnPhoneNumber), Electronics(ElectricityConsumption)
{
	std::cout << "Phone Construction!" << std::endl;
}

void Phone::PhoneTo(int PhoneNumber)
{
	std::cout << "Phone to Number " << PhoneNumber << std::endl;
}

void Phone::PrintOwnPhoneNumber()
{
	std::cout << "Phone OwnPhoneNumber: " << OwnPhoneNumber << std::endl;
}

void Phone::PrintDescription()
{
	std::cout << "Phone Description() override;" << std::endl;
}

void Phone::PrintElectricityConsumption()
{
	std::cout << "Phone ElectricityConsumption: " << ElectricityConsumption << std::endl;
}

Phone::~Phone()
{
	std::cout << "Phone Destruction!" << std::endl;
}