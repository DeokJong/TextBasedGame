#pragma once
#include "Entity.h"
#include "SkillFactory.h"
#include "StandardBuff.h"
#include <random>
#include <iostream>
#include <vector>


class Player : public Entity {
	vector<BuffBase*> buffList;
	vector<Skill*> PlayerSkill;
	SkillFactory SF;
public:
	Player();
	Entity TPD;

	void addSkill(Skill* skill);
	void setSkill(Skill*,int index);
	Skill* getSkill(int index);
	void useSkill(int index);

	void addBuff(BuffBase* buff);

	void saveData();
	void loadData();
	

	void checkBuffList();
};

extern Player p;