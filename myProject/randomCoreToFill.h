#pragma once
#include"randomCoreToFill_interface.h"
#include<vector>
#include<string>
#include<sstream>
#include<cstdlib>
#include<ctime>

class randomCoreToFill
{
private:
public:
	std::vector<std::string> student;
	std::vector<std::string> subject;
	randomCoreToFill();
	randomCoreToFill(randomCoreToFill&);
	virtual ~randomCoreToFill() {}
	void wholeFactGenerating(fact&);
};
randomCoreToFill::randomCoreToFill()
{
	student.push_back("Williams");
	student.push_back("Peters");
	student.push_back("Gibson");
	student.push_back("Martin");
	student.push_back("Jordan");
	student.push_back("Evans");
	student.push_back("Stone");
	student.push_back("Roberts");
	student.push_back("Mills");
	student.push_back("Lewis");

	subject.push_back("Algebra");
	subject.push_back("Biology");
	subject.push_back("Drawing");
	subject.push_back("Chemistry");
	subject.push_back("Geography");
	subject.push_back("Geometry");
	subject.push_back("History");
	subject.push_back("Literature");
	subject.push_back("Music");
	subject.push_back("Physics");
}
randomCoreToFill::randomCoreToFill(randomCoreToFill& core)
{
	if (this != &core)
	{
		this->student = core.student;
		this->subject = core.subject;
	}
}
void randomCoreToFill::wholeFactGenerating(fact& fact)
{
	srand(time(0));
	fact.push_back(student.at(rand()%11));
	fact.push_back(" has ");
	std::ostringstream ost;
	ost << (rand()%51) + 50;
	fact.push_back(ost.str());
	fact.push_back(" in ");
	fact.push_back(subject.at(rand()%11));
}