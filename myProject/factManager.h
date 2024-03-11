#pragma once
#include"factManager_interface.h"
#include"factArray.h"
#include"factFiller.h"

class factManager : private factArray, factFiller, public factManager_interface
{
private:
	fileManager_interface& fileManager;
public:
	virtual ~factManager() = 0;
	void set_fileManager(fileManager_interface&);
	void newConsolFact();
	void newRandFact();
	void get_factData();
};

