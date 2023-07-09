#pragma once
#include "Entity.h"

class Monster : public Entity {
public:
	Monster(string name = "", string job = "", int maxHp = 1, int maxMana = 1, int maxDamage = 1, int minDamage = 1);
	void reRoll(int maxHp, int minHp, int maxDamage, int minDamage) {
		setMaxHp(roll(minHp, maxHp));
		setHp(getMaxHp());
		setMaxDamage(maxDamage);
		setMinDamage(minDamage);
	}
	virtual void upLevel()=0;
};
