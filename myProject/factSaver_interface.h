#pragma once
#include"string"
#include"factArray_interface.h"

class factSaver_interface
{
public:
	virtual ~factSaver_interface() = 0;
	virtual void fileName(char*, int) = 0;
	virtual void fileName(std::string) = 0;
	virtual void addTrackedFactManager(factArray_interface&) = 0;
	virtual void fact_upload(factArray_interface&) = 0;
	virtual void fact_download(factArray_interface&) = 0;
};