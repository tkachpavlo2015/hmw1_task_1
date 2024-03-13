#pragma once
#include<vector>
#include<string>
#include"myException.h"
#include "factArray_interface.h"
class factArray : public factArray_interface
{
private:
	std::vector<fact> newData;
public:
	virtual ~factArray();
	void newFact();
	fact& get_last();
	class bad_index;
	fact& operator[](int) throw (myException);
	int size() const;
	
	class bad_index : public myException
	{
	private:
		std::string message;
	public:
		bad_index() : myException(), message("::factArray::bad_index") {}
		virtual const std::string& getMessage() const { return myException::getMessage() + message; }
	};
};

