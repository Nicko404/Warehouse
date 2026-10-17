#include "Calculator.h"

Calculator::Calculator(int BatteryCapacity, float ElectricityConsumption) : BatteryCapacity(BatteryCapacity), Electronics(ElectricityConsumption)
{
	std::cout << "Calculator Construction!" << std::endl;
}

void Calculator::PrintSum(int a, int b)
{
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void Calculator::PrintBatteryCapacity()
{
	std::cout << "Calculator BatteryCapacity: " << BatteryCapacity << std::endl;
}

void Calculator::PrintDescription()
{
	std::cout << "Calculator Description() override;" << std::endl;
}

void Calculator::PrintElectricityConsumption()
{
	std::cout << "Calculator ElectricityConsumption: " << ElectricityConsumption << std::endl;
}

Calculator::~Calculator()
{
	std::cout << "Calculator Destruction!" << std::endl;
}