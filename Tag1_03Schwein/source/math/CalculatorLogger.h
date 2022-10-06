#pragma once
#include "iostream"
#include "Calculator.h"
class CalculatorLogger : public Calculator
{
	Calculator& calculator_;


public:
	CalculatorLogger(Calculator& calculator)
		: calculator_(calculator)
	{
	}


	double add(double a, double b) override
	{
		std::cout << "Add wurde gerufen" << std::endl;
		return calculator_.add(a, b);
	}
};
