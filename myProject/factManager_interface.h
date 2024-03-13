#pragma once
#include"fileManager_interface.h"
#include"factSaver_interface.h"

class factManager_interface
{
public:
	virtual ~factManager_interface() = 0;
	virtual void set_factSaver(factSaver_interface&) = 0;
	virtual void newConsolFact() = 0;
	virtual void newRandFact() = 0;
	virtual void get_factData() = 0;
};

