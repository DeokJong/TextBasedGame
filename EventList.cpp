#include "EventList.h"
#include "MonsterFactory.h"
#include "GameStream.h"

void MonsterEncounter::excuteEvent() {
	std::cout << "몬스터를 마주합니다...\n";
	Entity Monster=MF.getMonster(GameStream::currentStage);

	while (true) {
		Monster.attack(100);
		p.useSkill();
	}
}
