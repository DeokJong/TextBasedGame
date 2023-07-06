#pragma once
#include "Entity.h"
#include "SkillFactory.h"
#include <iostream>
#include <vector>


class Player : public Entity {
	std::vector<Skill*> PlayerSkill;
	SkillFactory SF;
	
public:
	Player();
	Entity TPD=(Entity)*this;

	void addSkill(Skill* skill);
	void setSkill(Skill*,int index);

	Skill* getSkill(int index);

	void useSkill(int index);

	void saveData();
	void loadData();
	
	int attack(int rate);
};

extern Player p;