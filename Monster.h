#pragma once
#include "Entity.h"

class Monster : public Entity {
protected:
	Monster(string name = "", string job = "", int maxHp = 1, int maxMana = 1, int maxDamage = 1, int minDamage = 1);
	void reRoll(int maxHp, int minHp, int maxDamage, int minDamage) {
		setMaxHp(roll(minHp, maxHp));
		setHp(roll(maxHp / 8, maxHp + maxHp / 2));
		setMaxDamage(maxDamage);
		setMinDamage(minDamage);
	}
};
