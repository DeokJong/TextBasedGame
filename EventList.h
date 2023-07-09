#pragma once
#include "Event.h"


class MonsterEncounter : public Event{
	virtual void excuteEvent();;
};

class StarRoom : public Event {
	virtual void excuteEvent() {};
};

class Die : public Event {
	virtual void excuteEvent() {};
};

class Ambush : public Event {
	virtual void excuteEvent() {};
};

class Ambushed : public Event {
	virtual void excuteEvent() {};
};

class FindArtifact :public Event {
	virtual void excuteEvent() {};
};

class FindTemplate : public Event {
	virtual void excuteEvent() {};
};

class TrapRoom :public Event {
	virtual void excuteEvent() {};
};

class FindWell :public Event {
	virtual void excuteEvent() {};
};

