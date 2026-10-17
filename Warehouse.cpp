#include <iostream>

#include "Electronics.h"
#include "Phone.h"
#include "Calculator.h"
#include "Smartphone.h"
#include "TV.h"


int main()
{
	Electronics* pWarehouse[4];

	pWarehouse[0] = new Calculator(100, 0.5f);
	pWarehouse[1] = new Phone(12345, 1.0f);
	pWarehouse[2] = new Smartphone("Iphone", 67890, 3000, 1.2f);
	pWarehouse[3] = new TV(24.5f, 12.2f);

	std::cout << std::endl;

	bool Open = true;

	while (Open)
	{
		std::cout << "Choose the Electronics: " << std::endl;
		std::cout << "\t1 - Calculator;" << std::endl;
		std::cout << "\t2 - Phone;" << std::endl;
		std::cout << "\t3 - Smartphone;" << std::endl;
		std::cout << "\t4 - TV;" << std::endl;
		std::cout << "\t0 - Exit;" << std::endl;
		std::cout << "Your choice: ";

		int Choice;
		std::cin >> Choice;

		switch (Choice)
		{
		case 1:
		{
			Calculator* pCalculator = dynamic_cast<Calculator*>(pWarehouse[0]);
			pCalculator->PrintDescription();
			pCalculator->PrintElectricityConsumption();
			pCalculator->PrintBatteryCapacity();
			break;
		}

		case 2:
		{
			Phone* pPhone = dynamic_cast<Phone*>(pWarehouse[1]);
			pPhone->PrintDescription();
			pPhone->PrintElectricityConsumption();
			pPhone->PrintOwnPhoneNumber();
			break;
		}

		case 3:
		{
			Smartphone* pSmartphone = dynamic_cast<Smartphone*>(pWarehouse[2]);
			pSmartphone->PrintDescription();
			pSmartphone->PrintElectricityConsumption();
			pSmartphone->PrintBrand();
			break;
		}

		case 4:
		{
			TV* pTV = dynamic_cast<TV*>(pWarehouse[3]);
			pTV->PrintDescription();
			pTV->PrintElectricityConsumption();
			pTV->PrintInchSize();
			break;
		}

		case 0:
		{
			Open = false;
			break;
		}

		default:
		{
			std::cout << "Enter from 1 to 4 or 0 for Exit;" << std::endl;
			break;
		}
		}

		std::cout << std::endl;
	}

	delete pWarehouse[0];
	delete pWarehouse[1];
	delete pWarehouse[2];
	delete pWarehouse[3];

	std::cout << std::endl << "Programm is end!" << std::endl;

	return 0;
}