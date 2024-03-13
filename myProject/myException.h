#pragma once
#include<string>
class myException
{
private:
	const std::string message;
public:
	myException() : message("ERROR: myException") {}
	virtual const std::string& getMessage() const { return message; }
};
