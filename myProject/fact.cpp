#include "fact.h"

fact::fact() : text() {}

fact::fact(fact& fact)
{
	if (this != &fact) this->text = fact.check_text();
}

void fact::push_back(std::string word)
{
	text.push_back(word);
}

std::vector<std::string>& fact::get_text()
{
	return text;
}

const std::vector<std::string>& fact::check_text()
{
	return text;
}