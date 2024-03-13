#pragma once
#include"historySaver.h"
#include"factManager.h"

class programInterface
{
public:
	factManager obj_factManager;
	factSaver obj_factSaver;
	historySaver obj_historySaver;
	programInterface();
	virtual ~programInterface();
};