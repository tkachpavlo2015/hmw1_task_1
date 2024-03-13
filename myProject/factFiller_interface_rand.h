#pragma once
#include"fact_interface_fill.h"
#include"randomCoreToFill.h"

class factFiller_interface_rand
{
public:
	virtual void setFactGenerator(randomCoreToFill&) = 0;
	virtual void random_fill(fact_interface_fill&) = 0;
};

