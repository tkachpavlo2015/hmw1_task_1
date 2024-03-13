#pragma once
#include"fact.h"
#include"randomCoreToFill.h"

class factFiller_interface_rand
{
public:
	virtual void setFactGenerator(randomCoreToFill&) = 0;
	virtual void random_fill(fact&) = 0;
};

