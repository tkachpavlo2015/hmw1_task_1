#pragma once
#include"fact_interface_fill.h"

class factFiller_interface_consol
{
public:
	virtual ~factFiller_interface_consol() = 0;
	virtual void consol_fill(fact_interface_fill&) = 0;
};

