#include "Skill.h"

Skill::Skill(string name, int rate, int type) : name(name), rate(rate), type(type) {
	if (!(0 <= type && type <= 1)) {
		cout << "Skill Base Construct type Erorr!\n";
		exit(0);
	}
}

string Skill::getName()
{
	return this->name;
}