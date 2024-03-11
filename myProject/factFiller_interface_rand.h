#pragma once
#include"fact_interface_fill.h"
#include"randomCoreToFill_interface.h"

class factFiller_interface_rand
{
public:
	virtual ~factFiller_interface_rand() = 0;
	virtual void setFactGenerator(randomCoreToFill_interface&) = 0;
	virtual void random_fill(fact_interface_fill&) = 0;
};

