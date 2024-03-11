#pragma once
#include<vector>
#include "factArray_interface.h"
class factArray : public factArray_interface
{
private:
	std::vector<fact> newData;
public:
	virtual ~factArray();
	virtual void push_back(fact&);
	virtual fact& get_last();
	virtual fact& operator[](int);
	virtual int size();
};

