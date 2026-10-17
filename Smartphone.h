#pragma once

#include "Phone.h"
#include "Calculator.h"

#include <string>

class Smartphone : public Phone, Calculator
{
protected:

	std::string Brand;

public:
	
	Smartphone(std::string Brand, int OwnPhoneNumber, int BatteryCapacity, float ElectricityConsumption);

	void PrintBrand();

	void PhoneTo(int PhoneNumber) override;
	void PrintOwnPhoneNumber() override;

	void PrintSum(int a, int b) override;
	void PrintBatteryCapacity() override;

	void PrintDescription() override;
	void PrintElectricityConsumption() override;

	~Smartphone();
};