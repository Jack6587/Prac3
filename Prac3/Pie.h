#pragma once
#include <string>

class Pie {
public:
	Pie();
	
	virtual std::string description() { return std::string(); };
};

