#pragma once
#include<vector>
#include<string>
#include"fact_interface_fill.h"
#include"fact_interface_retrieve.h"

class fact : public fact_interface_fill, fact_interface_retrieve
{
private:
	std::vector<std::string> text;
public:
	virtual ~fact();
	void virtual push_back(std::string);
	virtual fact_interface_retrieve& get_text();
	virtual const fact_interface_retrieve& check_text();
};