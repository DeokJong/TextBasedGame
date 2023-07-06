#pragma once
#include "Entity.h"
#include "SkillFactory.h"
#include "StandardBuff.h"
#include <random>
#include <iostream>
#include <vector>


class Player : public Entity {
	mt19937 mt;
	uniform_int_distribution<int> gen;

	vector<BuffBase*> buffList;
	vector<Skill*> PlayerSkill;
	SkillFactory SF;
public:
	Player();
	Entity TPD;

	void initRandom();
	void startRandom(int l, int r);

	void addSkill(Skill* skill);
	void setSkill(Skill*,int index);
	Skill* getSkill(int index);
	void useSkill(int index);

	void addBuff(BuffBase* buff);

	void saveData();
	void loadData();
	
	int attack(int rate);

	void checkBuffList() {
			for (auto it = buffList.begin(); it != buffList.end();it++) {
				(*it)->check();
			}

			while (true) {
				auto it = buffList.begin();

				for (; it != buffList.end(); it++) {
					if (!(*it)->isTime()) {
						(*it)->deAllocate();
						delete* it;
						buffList.erase(it);
						break;
					}
				}

				if (it == buffList.end()) break;
			}
	}
};

extern Player p;