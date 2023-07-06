#pragma once
#include "Entity.h"
#include "SkillFactory.h"
#include <random>
#include <iostream>
#include <vector>


class Player : public Entity {
	mt19937 mt;
	uniform_int_distribution<int> gen;

	std::vector<Skill*> PlayerSkill;
	SkillFactory SF;
public:
	Player();
	Entity TPD;

	void initRandom();
	void startRandom(int l,int r) {
		gen = uniform_int_distribution<int>(l, r);
	}

	void addSkill(Skill* skill);
	void setSkill(Skill*,int index);

	Skill* getSkill(int index);

	void useSkill(int index);

	void saveData();
	void loadData();
	
	int attack(int rate);
};

extern Player p;