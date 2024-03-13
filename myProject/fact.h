#pragma once
#include"fact_interface_fill.h"
#include"fact_interface_retrieve.h"

class fact : public fact_interface_fill, fact_interface_retrieve
{
private:
	std::vector<std::string> text;
public:
	virtual ~fact();
	void push_back(std::string);
	std::vector<std::string>& get_text();
	const std::vector<std::string>& check_text();
};