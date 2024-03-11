#pragma once
#include "clientInterface_interface.h"
#include "programInterface.h"
class clientInterface : public clientInterface_interface
{
private:
	programInterface & program;
public:
	virtual ~clientInterface();
	void dialogueStart();
	void useProgramInterface(programInterface&);

};

