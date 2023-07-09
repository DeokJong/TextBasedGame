#include "MonsterFactory.h"

int MonsterFactory::roll() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 3);
	return dis(gen);
}

Entity MonsterFactory::getMonster(int group) {
	switch (group) {
	case 1:
		switch (roll()) {
		case 1:return Slime(); break;
		case 2:return GiantRat(); break;
		case 3:return Lmp(); break;
		}
		break;
	case 2:
		switch (roll()) {
		case 1:return Gobblin(); break;
		case 2:return Skeleton(); break;
		case 3:return DwarfWarrior(); break;
		}
		break;
	case 3:
		switch (roll()) {
		case 1:return Orc(); break;
		case 2:return Troll(); break;
		case 3:return Golem(); break;
		}
		break;
	case 4:
		return Dragon();
		break;
	default:
		cout << "MonsterFactory getMonster Funcion is Error! system done!";
		exit(0);
		break;
	}
}

MonsterFactory MF;