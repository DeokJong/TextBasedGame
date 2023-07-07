#pragma once
#include "Monster.h"
class Gobblin : public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
	Gobblin() {
		setMaxHp(roll(minHp, maxHp));
		setHp(getMaxHp());
	}
};
int Gobblin::maxHp = 100;
int Gobblin::minHp = 60;
int Gobblin::maxDamage = 20;
int Gobblin::minDamage = 10;
int Gobblin::level = 1;