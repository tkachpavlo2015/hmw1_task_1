#pragma once
#include<string>

class historySaver_interface
{
public:
	virtual ~historySaver_interface() = 0;
	virtual void fileNane(char*, int) = 0;
	virtual void fileNane(std::string) = 0;
	virtual void newReplic(char*) = 0;
	virtual void newReplic(std::string) = 0;
	virtual void newDialogue() = 0;
};
