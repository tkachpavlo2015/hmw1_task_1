#pragma once
#include "fileManager_interface.h"
class fileManager : public fileManager_interface
{
private:
	char dataset[20];
public:
	virtual ~fileManager();
	virtual void data_upload(factArray_interface&);
	virtual void data_download(factArray_interface&);
};

