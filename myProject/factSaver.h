#pragma once
#include "factSaver_interface.h"
class factSaver : public factSaver_interface
{
private:
	char dataset[20];
	factArray_interface& trackedFactManager;
public:
	virtual ~factSaver();
	virtual void fileName(char*, int);
	virtual void fileName(std::string);
	virtual void addTrackedFactManager(factArray_interface&);
	virtual void fact_upload(factArray_interface&);
	virtual void fact_download(factArray_interface&);
};

