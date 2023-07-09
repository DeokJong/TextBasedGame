#include "Skill.h"

Skill::Skill(string name, int rate, int time) : name(name), rate(rate), time(time) {
}

string Skill::getName()
{
	return this->name;
}