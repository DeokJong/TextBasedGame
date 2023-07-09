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
	int killCounter;
public:
	Player();

	void killMonster();
	void addSkill(Skill* skill);
	void changeClass();
	void setSkill(Skill*,int index);
	Skill* getSkill(int index);
	void useSkill(int index);

	void addBuff(BuffBase* buff);

	void removeBuff();
	
	void checkBuffList();
	
	void initPlayer();

	int selectSkill();

	void addHp(int rate);

	void upLevel();

	int getKillCount();
};

extern Player p;