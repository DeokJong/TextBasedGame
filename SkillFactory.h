#pragma once
#include "NewbyActiveSkillList.h"
#include "WarriorActiveSkillList.h"
#include <vector>

class SkillFactory{
	std::vector<Skill*> newbyArr;
	std::vector<Skill*> warriorArr;
public:
	SkillFactory();
	Skill* getNewbySkill(int index);
	Skill* getWarriorSkill(int index);
};

