#include "MonsterList.h"

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


Slime::Slime() :Monster("슬라임", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(this->level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Slime::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Slime::maxHp = 20;
int Slime::minHp = 15;
int Slime::maxDamage = 1;
int Slime::minDamage = 1;
int Slime::level = 1;

GiantRat::GiantRat() :Monster("거대쥐", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(GiantRat::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void GiantRat::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int GiantRat::maxHp = 40;
int GiantRat::minHp = 30;
int GiantRat::maxDamage = 10;
int GiantRat::minDamage = 5;
int GiantRat::level = 1;

Lmp::Lmp() :Monster("놀", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Lmp::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Lmp::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Lmp::maxHp = 30;
int Lmp::minHp = 20;
int Lmp::maxDamage = 15;
int Lmp::minDamage = 10;
int Lmp::level = 1;

Gobblin::Gobblin() :Monster("고블린", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Gobblin::level);
	reRoll(this->maxHp,this->minHp,this->maxDamage,this->minDamage);
}
void Gobblin::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Gobblin::maxHp = 80;
int Gobblin::minHp = 90;
int Gobblin::maxDamage = 20;
int Gobblin::minDamage = 15;
int Gobblin::level = 1;

Skeleton::Skeleton() :Monster("스켈레톤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Skeleton::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Skeleton::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Skeleton::maxHp = 50;
int Skeleton::minHp = 40;
int Skeleton::maxDamage = 30;
int Skeleton::minDamage = 20;
int Skeleton::level = 1;

DwarfWarrior::DwarfWarrior() :Monster("드워프 전사", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(DwarfWarrior::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void DwarfWarrior::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int DwarfWarrior::maxHp = 150;
int DwarfWarrior::minHp = 100;
int DwarfWarrior::maxDamage = 30;
int DwarfWarrior::minDamage = 25;
int DwarfWarrior::level = 1;

Orc::Orc() :Monster("오크", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Orc::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Orc::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Orc::maxHp = 1000;
int Orc::minHp = 600;
int Orc::maxDamage = 200;
int Orc::minDamage = 100;
int Orc::level = 1;



Troll::Troll() :Monster("트롤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Troll::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Troll::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Troll::maxHp = 2000;
int Troll::minHp = 1000;
int Troll::maxDamage = 500;
int Troll::minDamage = 200;
int Troll::level = 1;

Golem::Golem() :Monster("골렘", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Golem::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Golem::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Golem::maxHp = 1500;
int Golem::minHp = 1400;
int Golem::maxDamage = 250;
int Golem::minDamage = 200;
int Golem::level = 1;

Dragon::Dragon() :Monster("드래곤", "몬스터", IGNORE_RATE, IGNORE_RATE, maxDamage, minDamage) {
	setLevel(Dragon::level);
	reRoll(this->maxHp, this->minHp, this->maxDamage, this->minDamage);
}
void Dragon::upLevel() {
	this->maxHp += this->maxHp / 5;
	this->minHp += this->minHp / 5;
	this->maxDamage += this->maxDamage / 5;
	this->minDamage += this->minDamage / 5;
	this->level++;
}
int Dragon::maxHp = 3000;
int Dragon::minHp = 2500;
int Dragon::maxDamage = 1000;
int Dragon::minDamage = 1000;
int Dragon::level = 1;

