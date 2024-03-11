#pragma once
#include "historySaver_interface.h"
class historySaver : public historySaver_interface
{
private:
	char historyFile[20];
public:
	virtual ~historySaver();
	virtual void newAct();
	virtual void newDialogue();
	virtual void continueDialogue();
};

