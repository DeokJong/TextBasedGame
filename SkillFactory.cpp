#include "SkillFactory.h"

SkillFactory::SkillFactory() {
	newbyArr.push_back(new Hit());
	newbyArr.push_back(new Roll());
	newbyArr.push_back(new Guard());

	warriorArr.push_back(new PowerSlash());
	warriorArr.push_back(new RagingCry());
	warriorArr.push_back(new DeathStrike());
}

Skill* SkillFactory::getNewbySkill(int index)
{
	if (!(0 <= index && index <= 2)) cout << "SkillFactory getNewbySkillError!\n";
	return newbyArr.at(index);
}

Skill* SkillFactory::getWarriorSkill(int index)
{
	if (!(0 <= index && index <= 2)) cout << "SkillFactory getWarriorSkillError!\n";
	return warriorArr.at(index);
}
