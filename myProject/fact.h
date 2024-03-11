#pragma once
#include"fact_interface_fill.h"
#include"fact_interface_retrieve.h"

class fact : public fact_interface_fill, fact_interface_retrieve
{
public:
	virtual ~fact() = 0;
	void virtual push_back(std::string) = 0;
	virtual fact_interface_retrieve& get_text() = 0;
	virtual const fact_interface_retrieve& check_text() = 0;
};