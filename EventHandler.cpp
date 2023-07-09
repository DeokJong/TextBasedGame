#include "EventHandler.h"

EventHandler::EventHandler() {
	EventList.push_back(new StarRoom);//0
	EventList.push_back(new Die);//1
}

int EventHandler::roll() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);
	return dis(gen);
}

Event* EventHandler::getRandomEvent() {
	int rate = roll();

	if (rate >= 1 && rate <= 2) { return new Ambush(); }
	else if (rate >= 3 && rate <= 4) { return new Ambushed(); }
	else if (rate >= 5 && rate <= 6) { return new FindArtifact(); }
	else if (rate >= 7 && rate <= 8) { return new FindTemplate(); }
	else if (rate >= 9 && rate <= 10) { return new FindWell(); }
	else if (rate >= 11 && rate <= 12) { return new TrapRoom(); }
	else { return new MonsterEncounter(); }
}

Event* EventHandler::getStart() { return EventList.at(0); }

Event* EventHandler::getDie() { return EventList.at(1); }
