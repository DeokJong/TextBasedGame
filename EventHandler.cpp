#include "EventHandler.h"

EventHandler::EventHandler() {
}

int EventHandler::roll() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);
	return dis(gen);
}

Event* EventHandler::getRandomEvent() {
	int rate = roll();
	if (rate >= 1 && rate <= 10) { return new Ambush(); }
	else if (rate >=11 && rate <= 20) { return new Ambushed(); }
	else if (rate >= 21 && rate <= 30) { return new FindArtifact(); }
	else if (rate >= 31 && rate <= 40) { return new FindTemplate(); }
	else if (rate >= 41 && rate <= 50) { return new FindWell(); }
	else if (rate >= 51 && rate <= 60) { return new TrapRoom(); }
	else { return new MonsterEncounter(); }
}
