#pragma once

#include "Electronics.h"

class Calculator : virtual public Electronics
{
protected:
	
	int BatteryCapacity;

public:

	Calculator(int BatteryCapacity, float ElectricityConsumption);

	virtual void PrintSum(int a, int b);
	virtual void PrintBatteryCapacity();

	void PrintDescription() override;
	void PrintElectricityConsumption() override;

	~Calculator();
};