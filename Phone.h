#pragma once

#include "Electronics.h"

class Phone : virtual public Electronics
{
protected:

	int OwnPhoneNumber;

public:

	Phone(int OwnPhoneNumber, float ElectricityConsumption);

	virtual void PhoneTo(int PhoneNumber);
	virtual void PrintOwnPhoneNumber();

	void PrintDescription() override;
	void PrintElectricityConsumption() override;

	~Phone();
};