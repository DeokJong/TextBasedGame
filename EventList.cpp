#include "EventList.h"
#include "MonsterFactory.h"
#include "GameStream.h"

void MonsterEncounter::excuteEvent() {
	std::cout << "���͸� �����մϴ�...\n";
	Entity Monster=MF.getMonster(GameStream::currentStage);

	while (true) {
		Monster.attack(100);
		p.useSkill();
	}
}
