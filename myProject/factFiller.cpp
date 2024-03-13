#include "factFiller.h"
#include<iostream>
#include<string>

void factFiller::consol_fill(fact_interface_fill& fact)
{
	char symbol;
	std::string word;
	while (std::cin.get(symbol) && symbol != '\n')
	{
		word += symbol;
	}
	fact.push_back(word);
}
void factFiller::setFactGenerator(randomCoreToFill& core)
{
	factGenerator = core;
}
void factFiller::random_fill(fact_interface_fill&)
{

}