#include "TV.h"

TV::TV(float InchSize, float ElectricityConsumption) : InchSize(InchSize), Electronics(ElectricityConsumption)
{
	std::cout << "TV Construction!" << std::endl;
}

void TV::PrintInchSize()
{
	std::cout << "TV InchSize: " << InchSize << std::endl;
}

void TV::PrintDescription()
{
	std::cout << "TV Description() override;" << std::endl;
}

void TV::PrintElectricityConsumption()
{
	std::cout << "TV Electricity: " << ElectricityConsumption << std::endl;
}

TV::~TV()
{
	std::cout << "TV Destruction!" << std::endl;
}