#pragma once

#include <iostream>

class Electronics
{
protected:

	float ElectricityConsumption;

public:

	Electronics(float ElectricityConsumption) : ElectricityConsumption(ElectricityConsumption) { std::cout << "Electronics Construction!" << std::endl; };

	virtual void PrintDescription() = 0;

	virtual void PrintElectricityConsumption() = 0;

	virtual ~Electronics() { std::cout << "Electronics Destruction!" << std::endl; };
};