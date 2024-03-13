#pragma once
#include "historySaver_interface.h"
class historySaver : public historySaver_interface
{
private:
	char historyFile[20];
public:
	virtual ~historySaver();
	void fileNane(char*, int);
	void fileNane(std::string);
	void newReplic(char*);
	void newReplic(std::string);
	virtual void newDialogue();
};

