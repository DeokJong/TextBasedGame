#pragma once
#include "Skill.h"

class Hit : public Skill {
public:
	Hit();
	virtual void active()override;
};
class Roll :public Skill {
public:
	Roll();
	virtual void active()override;
};
class Heal : public Skill {
public:
	Heal();
	virtual void active() override;
};