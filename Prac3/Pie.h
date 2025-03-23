#pragma once
#include <string>

class Pie {
public:
	Pie();
	virtual ~Pie() {}
	
	virtual std::string description() = 0;
};

