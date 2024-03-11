#pragma once
#include<string>

class fact_interface_fill
{
public:
	virtual ~fact_interface_fill() = 0;
	void virtual push_back(std::string) = 0;
};

