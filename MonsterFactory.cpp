#include "MonsterFactory.h"

int MonsterFactory::roll() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 3);
	return dis(gen);
}

Monster* MonsterFactory::getMonster(int stage) {
	int group = 0;

	switch (stage)
	{
	case 1:
	case 2:
	case 3: group = 1;
		break;
	case 4:
	case 5:
	case 6: group = 2;
		break;
	case 7:
	case 8:
	case 9:group = 3;
		break;
	case 10:group = 4;
		break;
	}

	switch (group) {
	case 1:
		switch (roll()) {
		case 1:return new Slime(); break;
		case 2:return new GiantRat(); break;
		case 3:return new Lmp(); break;
		}
		break;
	case 2:
		switch (roll()) {
		case 1:return new Gobblin(); break;
		case 2:return new Skeleton(); break;
		case 3:return new DwarfWarrior(); break;
		}
		break;
	case 3:
		switch (roll()) {
		case 1:return new Orc(); break;
		case 2:return new Troll(); break;
		case 3:return new Golem(); break;
		}
		break;
	case 4:
		return new Dragon();
		break;
	default:
		cout << "MonsterFactory getMonster Funcion is Error! system done!";
		exit(0);
		break;
	}
}

MonsterFactory MF;