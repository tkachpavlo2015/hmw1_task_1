#pragma once
#include"factArray_interface.h"
#include"fact.h"

class randomCoreToFill_interface
{
public:
	virtual ~randomCoreToFill_interface() = 0;
	virtual void wholeFactGenerating(fact&) = 0;
};