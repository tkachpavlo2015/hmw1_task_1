#pragma once
#include<vector>
#include "factArray_interface.h"
class factArray : public factArray_interface
{
private:
	std::vector<fact> newData;
public:
	virtual ~factArray() = 0;
	virtual void push_back(fact&) = 0;
	virtual fact& get_last() = 0;
	virtual fact& operator[](int) = 0;
	virtual int size() = 0;
};

