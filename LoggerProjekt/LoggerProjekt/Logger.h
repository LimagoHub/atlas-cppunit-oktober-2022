#pragma once
#include <iostream>
#include <string>
#include "Appender.h"
class Logger
{
	Appender& appender_;

public:
	Logger(Appender& appender)
		: appender_(appender)
	{
	}

	std::string calculate_prefix() const
	{
		return  "Komplizierter Prefix: ";
	}

	void log(const std::string& message) const
	{
		std::string prefix;
		prefix = calculate_prefix();
		appender_.write(prefix + message);
		
	}
};
