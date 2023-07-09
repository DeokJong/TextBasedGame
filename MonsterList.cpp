#include "MonsterList.h"

Gobblin::Gobblin() :Monster("고블린", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp,this->minHp,this->maxDamage,this->minDamage);
}
void Gobblin::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Gobblin::maxHp = 100;
int Gobblin::minHp = 60;
int Gobblin::maxDamage = 20;
int Gobblin::minDamage = 10;
int Gobblin::level = 1;


Orc::Orc() :Monster("고블린", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Orc::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Orc::maxHp = 100;
int Orc::minHp = 60;
int Orc::maxDamage = 20;
int Orc::minDamage = 10;
int Orc::level = 1;


Slime::Slime() :Monster("슬라임", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Slime::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Slime::maxHp = 100;
int Slime::minHp = 60;
int Slime::maxDamage = 20;
int Slime::minDamage = 10;
int Slime::level = 1;

GiantRat::GiantRat() :Monster("거대쥐", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void GiantRat::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int GiantRat::maxHp = 100;
int GiantRat::minHp = 60;
int GiantRat::maxDamage = 20;
int GiantRat::minDamage = 10;
int GiantRat::level = 1;

Lmp::Lmp() :Monster("놀", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Lmp::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Lmp::maxHp = 100;
int Lmp::minHp = 60;
int Lmp::maxDamage = 20;
int Lmp::minDamage = 10;
int Lmp::level = 1;

Skeleton::Skeleton() :Monster("스켈레톤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Skeleton::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Skeleton::maxHp = 100;
int Skeleton::minHp = 60;
int Skeleton::maxDamage = 20;
int Skeleton::minDamage = 10;
int Skeleton::level = 1;

Troll::Troll() :Monster("트롤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Troll::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Troll::maxHp = 100;
int Troll::minHp = 60;
int Troll::maxDamage = 20;
int Troll::minDamage = 10;
int Troll::level = 1;

Golem::Golem() :Monster("골렘", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Golem::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Golem::maxHp = 100;
int Golem::minHp = 60;
int Golem::maxDamage = 20;
int Golem::minDamage = 10;
int Golem::level = 1;

Dragon::Dragon() :Monster("드래곤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Dragon::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int Dragon::maxHp = 100;
int Dragon::minHp = 60;
int Dragon::maxDamage = 20;
int Dragon::minDamage = 10;
int Dragon::level = 1;

DwarfWarrior::DwarfWarrior() :Monster("드워프 전사", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void DwarfWarrior::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level += this->level / 5;
}
int DwarfWarrior::maxHp = 100;
int DwarfWarrior::minHp = 60;
int DwarfWarrior::maxDamage = 20;
int DwarfWarrior::minDamage = 10;
int DwarfWarrior::level = 1;