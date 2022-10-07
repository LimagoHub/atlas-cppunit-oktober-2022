#pragma once
#include <string>

class Appender
{

public :
	virtual void write(const std::string& message) = 0;
};
