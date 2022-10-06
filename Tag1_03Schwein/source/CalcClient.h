#pragma once
#include <iostream>
#include "math/Calculator.h"
class CalcClient
{
	Calculator& calc;
public:

	CalcClient(Calculator& calc)
		: calc(calc)
	{
	}

	void go()
	{
		
		std::cout << calc.add(3, 4) << std::endl;
		std::cout << calc.add(3, 4) << std::endl;
	}
};