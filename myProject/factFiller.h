#pragma once
#include "factFiller_interface_consol.h"
#include "factFiller_interface_rand.h"

class factFiller : public factFiller_interface_consol, factFiller_interface_rand
{
private:
	randomCoreToFill factGenerator;
public:
	virtual ~factFiller();
	virtual void consol_fill(fact_interface_fill&);
	virtual void setFactGenerator(randomCoreToFill&);
	virtual void random_fill(fact_interface_fill&);
};

