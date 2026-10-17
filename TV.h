#pragma once

#include "Electronics.h"

class TV : public Electronics
{
protected:

	float InchSize;

public:

	TV(float InchSize, float ElectricityConsuption);

	void PrintInchSize();
	void PrintDescription() override;
	void PrintElectricityConsumption() override;

	~TV();
};