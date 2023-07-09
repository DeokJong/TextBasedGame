#pragma once
#include "MonsterList.h"
#include <vector>


//Slime			#1
//GiantRat		#1
//Lmp			#1

//Gobblin		#2
//Skeleton		#2
//DwarfWarrior  #2

//Orc			#3
//Troll			#3
//Golem			#3

//Dragon		#4


class MonsterFactory {
	int roll();
public:
	Entity getMonster(int group);
};


extern MonsterFactory MF;
