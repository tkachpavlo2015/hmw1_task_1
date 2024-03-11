#pragma once
#include"historySaver.h"
#include"factManager.h"

class programInterface
{
private:
	factManager_interface& obj_factManager;
	historySaver_interface& obj_historySaver;
public:
	virtual ~programInterface();
	void set_obj_factManager(factManager_interface&);
	void set_obj_historySaver(historySaver_interface&);
	void factRequest();
	void factInput();
	void newAct();
	void newDialogue();
	void continueDialogue();
	void showHistory();
};

