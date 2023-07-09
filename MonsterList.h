#pragma once
#include "Monster.h"
#define IGNORE_RATE 1

class Gobblin : public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Gobblin();
	virtual void upLevel()override;
};

class Orc : public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Orc();
	virtual void upLevel()override;
};

class Slime :public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Slime();
	virtual void upLevel()override;
};

class GiantRat : public Monster{
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	GiantRat();
	virtual void upLevel()override;
};

class Lmp:public Monster{
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Lmp();
	virtual void upLevel()override;
};

class Skeleton :public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Skeleton();
	virtual void upLevel()override;
};

class Troll :public Monster {

	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Troll();
	virtual void upLevel()override;
};

class Golem : public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Golem();
	virtual void upLevel()override;
};

class Dragon : public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	Dragon();
	virtual void upLevel()override;
};

class  DwarfWarrior: public Monster {
	static int maxHp;
	static int minHp;
	static int maxDamage;
	static int minDamage;
	static int level;
public:
	DwarfWarrior();
	virtual void upLevel()override;
};

