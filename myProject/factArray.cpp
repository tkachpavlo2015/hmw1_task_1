#include "factArray.h"
#include <iostream>

factArray::~factArray() {}

void factArray::newFact()
{
	newData.push_back(fact());
}

fact& factArray::get_last()
{
	return *(newData.rbegin());
}

fact& factArray::operator[](int index) throw (myException)
{
	try
	{
		if (index < 0 || index >= newData.size())
			throw bad_index();
		return newData.at(index);
	}
	catch (bad_index& exception)
	{
		std::cerr << exception.getMessage();
		abort();
	}
}

int factArray::size() const
{
	return newData.size();
}

