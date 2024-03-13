#pragma once
#include"programInterface.h"

class clientInterface_interface
{
public:
	virtual ~clientInterface_interface() = 0;
	virtual void useProgramInterface(programInterface&);
	virtual void dialogueStart() = 0;
};

