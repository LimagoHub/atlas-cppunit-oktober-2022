#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalcClient.h"

int main()
{
	CalculatorImpl impl;
	CalculatorLogger logger{ impl };
	CalcClient client{ logger };

	client.go();
	
}