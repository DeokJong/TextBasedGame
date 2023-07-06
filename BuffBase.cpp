#include "BuffBase.h"

BuffBase::BuffBase(int r, int t) :rate(r), time(t) {}


int BuffBase::getRate() {
	return rate;
}

int BuffBase::getTime() {
	return time;
}



bool BuffBase::isTime() {
	return !(time >= 0);
}

void BuffBase::check() {
	if (isTime()) {
		time--;
	}
}
