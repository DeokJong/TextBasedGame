#pragma once
class BuffBase{
	int rate;
	int time;
protected:
	BuffBase(int r, int t);
	~BuffBase();
	virtual void allocate() = 0;
	virtual void deAllocate() = 0;
	
	int getRate();
	int getTime();
public:
	bool isTime();
};

