#pragma once
#include "BuffBase.h"
#include "Player.h"

class DefenceBuff : public BuffBase{
	DefenceBuff(int r, int t) : BuffBase(r, t) {
	}
	virtual void allocate() {
		p.setDefence(this->getRate());
	}

	virtual void deAllocate() {
		p.setDefence(p.TPD.getDefence());
	}

};

class DamageBuff : public BuffBase {
	DamageBuff(int r, int t) : BuffBase(r, t) {
	}
	virtual void allocate() {
		p.setDamage(this->getRate());
	}

	virtual void deAllocate() {
		p.setDamage(p.TPD.getDamage());
	}
};

class ActivityBuff : public BuffBase {
	ActivityBuff(int r, int t) : BuffBase(r, t) {
	}
	virtual void allocate() {
		p.setActivity(this->getRate());
	}

	virtual void deAllocate() {
		p.setActivity(p.TPD.getActivity());
	}
};

class HitRateBuff : public BuffBase {
	HitRateBuff(int r, int t) : BuffBase(r, t) {
	}
	virtual void allocate() {
		p.setHitRate(this->getRate());
	}

	virtual void deAllocate() {
		p.setHitRate(p.TPD.getHitRate());
	}
};

class AvoidanceBuff : public BuffBase {
	AvoidanceBuff(int r, int t) : BuffBase(r, t) {
	}
	virtual void allocate() {
		p.setAvoidance(this->getRate());
	}

	virtual void deAllocate() {
		p.setAvoidance(p.TPD.getAvoidance());
	}
};


//int defence;
//int damage;
//int activity;
//int hitRate;
//int avoidance;