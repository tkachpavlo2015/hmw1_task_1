#pragma once
#include<vector>
#include<string>

class fact_interface_retrieve
{
public:
	virtual ~fact_interface_retrieve() = 0;
	virtual std::vector<std::string>& get_text() = 0;
	virtual const std::vector<std::string>& check_text() = 0;
};