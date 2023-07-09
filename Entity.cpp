#include "Entity.h"

Entity::Entity(std::string name, string job, int maxHp, int maxMana, int maxDamage, int minDamage)
	: name(name), job(job), maxHp(maxHp), maxMana(maxMana), maxDamage(maxDamage), minDamage(minDamage),
	hp(maxHp), mana(maxMana), defence(5), activity(0), hitRate(65), avoidance(20) {
	damage = 0;
	level = 1;
}

Entity::Entity() {
	this->name = "";
	this->job = "";

	this->maxHp = 1;
	this->maxMana = 1;
	this->maxDamage = 1;
	this->minDamage = 1;

	this->hp = 0;
	this->mana = 0;

	this->defence = 1;
	this->activity = 0;
	this->hitRate = 0;
	this->avoidance = 0;
}

Entity::Entity(const Entity& e) {
	this->name = e.name;
	this->job = e.job;

	this->maxHp = e.maxHp;
	this->maxMana = e.maxMana;
	this->maxDamage = e.maxDamage;
	this->minDamage = e.minDamage;

	this->hp = e.hp;
	this->mana = e.mana;

	this->defence = e.defence;
	this->activity = e.activity;
	this->hitRate = e.hitRate;
	this->avoidance = e.avoidance;
}


void Entity::setJob(string j) { this->job = j; }

void Entity::setName() {
	std::cout << "이름을 입력하시오 >> ";
	std::cin >> this->name;
}

void Entity::setMaxHp(int maxHp) { this->maxHp = maxHp; }
void Entity::setMaxMana(int maxMana) { this->maxMana = maxMana; }
void Entity::setMaxDamage(int maxDamage) { this->maxDamage = maxDamage; }
void Entity::setMinDamage(int minDamage) { this->minDamage = minDamage; }
void Entity::setHp(int hp) { this->hp = hp; }
void Entity::setMana(int mana) { this->mana = mana; }
void Entity::setDefence(int defence) { this->defence = defence; }
void Entity::setActivity(int activity) { this->activity = activity; }
void Entity::setHitRate(int hitRate) { this->hitRate = hitRate; }
void Entity::setAvoidance(int Avoidnace) { this->avoidance = avoidance; }

void Entity::setDamage(int damage) { this->damage = damage; }

void Entity::setLevel(int level) { this->level = level; }

string Entity::getName() { return this->name; }

int Entity::getHp() { return this->hp; }
int Entity::getMana() { return this->mana; }
int Entity::getDefence() { return this->defence; }
int Entity::getActivity() { return this->activity; }
int Entity::getHitRate() { return this->hitRate; }
int Entity::getAvoidance() { return this->avoidance; }
int Entity::getDamage() { return this->damage; }
int Entity::getLevel() { return this->level; }
int Entity::getMaxHp() { return this->maxHp; }
int Entity::getMaxMana() { return this->maxMana; }
int Entity::getMaxDamage() { return this->maxDamage; }
int Entity::getMinDamage() { return this->minDamage; }


int Entity::roll(int l, int r) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(l, r);
	return dis(gen);
}

void Entity::upLevel() {
	this->maxHp += maxHp / 5;
	this->maxMana += maxMana / 5;
	this->maxDamage += maxDamage / 5;
	this->minDamage += minDamage / 5;
	this->defence += defence / 5;
}

int Entity::attack(int rate)
{
	int baseDamage = roll(this->getMinDamage(), this->getMaxDamage());
	return (int)(baseDamage * rate / 100);
}