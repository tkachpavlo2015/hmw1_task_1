#pragma once
class historySaver_interface
{
public:
	virtual ~historySaver_interface() = 0;
	virtual void newAct() = 0;
	virtual void newDialogue() = 0;
	virtual void continueDialogue() = 0;
};

