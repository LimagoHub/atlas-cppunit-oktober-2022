#pragma once
#include "gtest/gtest.h"
#include "../source/Calculator.h"
#include "../source/CalcClient.h"
#include "MockCalculator.h"


class CalcClientTest :  public testing::Test
{
protected:
	MockCalculator calculatorMock;
	CalcClient object_under_test{ calculatorMock };



	
};
