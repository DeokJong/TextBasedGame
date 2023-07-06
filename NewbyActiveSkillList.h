#pragma once
#include "Skill.h"

class Hit : public Skill{
public:
	Hit();
	virtual void active() ;
};
class Roll :public Skill {
public:
	Roll();
	virtual void active() ;
};
class Guard : public Skill {
public:
	Guard();
	virtual void active() ;
};