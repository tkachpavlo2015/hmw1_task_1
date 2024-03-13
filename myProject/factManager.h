#pragma once
#include"factManager_interface.h"
#include"factArray.h"
#include"factFiller.h"
#include"factSaver_interface.h"
#include"factSaver.h"

class factManager : private factArray, factFiller, public factManager_interface 
{
private:
	factSaver_interface& factSaver;
public:
	friend class factSaver;
	virtual ~factManager();
	void set_factSaver(factSaver_interface&);
	void newConsolFact();
	void newRandFact();
	void get_factData();
};