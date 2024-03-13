#include "fact.h"

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