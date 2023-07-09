#pragma once
#include <random>
#include <vector>
#include "EventList.h"

class EventHandler {
	std::vector<Event*> EventList;
public:
	EventHandler();
	int roll();

	Event* getRandomEvent();

	Event* getStart();
	Event* getDie();
};
