#pragma once
#include "Pie.h"

class RaspberryPie : public Pie {
public:
	RaspberryPie();

	std::string description() override;
};