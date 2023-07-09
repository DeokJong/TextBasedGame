#pragma once
#include "Event.h"
#include <Windows.h>


class MonsterEncounter : public Event{
	virtual void excuteEvent();
public :MonsterEncounter();
};

class Ambush : public Event {
	virtual void excuteEvent();
};

class Ambushed : public Event {
	virtual void excuteEvent();
};

class FindArtifact :public Event {
	virtual void excuteEvent();
};

class FindTemplate : public Event {
	virtual void excuteEvent();
};

class TrapRoom :public Event {
	virtual void excuteEvent();
};

class FindWell :public Event {
	virtual void excuteEvent();
};

int roll(int l, int r);

