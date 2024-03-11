#pragma once
#include"factArray_interface.h"

class fileManager_interface
{
public:
	virtual ~fileManager_interface() = 0;
	virtual void data_upload(factArray_interface&) = 0;
	virtual void data_download(factArray_interface&) = 0;
};

