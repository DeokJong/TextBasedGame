#pragma once
#include "Skill.h"
class PowerSlash : public Skill {
public:
	PowerSlash();
	virtual void active()override;
};

class RagingCry :public Skill {
public:
	RagingCry();
	virtual void active()override;
};

class DeathStrike : public Skill {
public:
	DeathStrike();
	virtual void active()override;
};

