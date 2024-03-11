#pragma once
#include"fact.h"

class factArray_interface
{
public:
	virtual ~factArray_interface() = 0;
	virtual void push_back(fact&) = 0;
	virtual fact & get_last() = 0;
	virtual fact& operator[](int) = 0;
	virtual int size() = 0;
};

