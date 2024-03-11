#pragma once

class fact_interface_retrieve
{
public:
	virtual ~fact_interface_retrieve() = 0;
	virtual fact_interface_retrieve& get_text() = 0;
	virtual const fact_interface_retrieve& check_text() = 0;
};