#pragma once
#include <iostream>
#include "Appender.h"

class ConsolenAppender: public Appender
{
public:
	void write(const std::string& message) override
	{
		std::cout << message << std::endl;
	}
};
