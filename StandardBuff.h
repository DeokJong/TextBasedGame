#pragma once
#include "BuffBase.h"

class maxDamageBuff :public BuffBase {
public:
	maxDamageBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~maxDamageBuff();
};
class minDamageBuff :public BuffBase {
public:
	minDamageBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~minDamageBuff() ;
};

class defenceBuff :public BuffBase {
public:
	defenceBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~defenceBuff() ;
};
class activityBuff :public BuffBase {
public:
	activityBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~activityBuff() ;
};
class hitRateBuff :public BuffBase {
public:
	hitRateBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~hitRateBuff() ;
};
class avoidanceBuff :public BuffBase {
public:
	avoidanceBuff(int r, int t);
	virtual void allocate()override;
	virtual void deAllocate()override;
	~avoidanceBuff() ;
};