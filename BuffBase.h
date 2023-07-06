#pragma once
class BuffBase{
	int rate;
	int time;
protected:
	BuffBase(int r, int t);
	virtual void allocate() = 0;
	int getRate();
	int getTime();
public:
	virtual void deAllocate() = 0;
	bool isTime();
	void check();
};

