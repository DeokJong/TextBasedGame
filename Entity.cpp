#include "Entity.h"

Entity::Entity(string name, int hp, int mana, int defence, int damage, int activity)
	: name(name), hp(hp), mana(mana), defence(defence), damage(damage), activity(activity), avoidance(20), hitRate(65)
{
}

Entity::Entity(const Entity& e) {
	this->name = e.name;
	this->job = e.job;
	this->hp = e.hp;
	this->mana = e.mana;
	this->defence = e.defence;
	this->damage = e.damage;
	this->activity = e.activity;
	this->hitRate = e.hitRate;
	this->avoidance = e.avoidance;
}

void Entity::setJob(string j) {
	this->job = j;
}

void Entity::setName() {
	std::cout << "이름을 입력하시오 >> ";
	std::cin >> this->name;
}

void Entity::setHp(int hp)
{
	Entity::hp = hp;
}
void Entity::setMana(int mana)
{
	Entity::mana = mana;
}
void Entity::setDefence(int defence)
{
	Entity::defence = defence;
}
void Entity::setDamage(int damage)
{
	Entity::damage = damage;
}
void Entity::setActivity(int activity)
{
	Entity::activity = activity;
}
void Entity::setHitRate(int hitRate) { this->hitRate = hitRate; }
void Entity::setAvoidance(int Avoidnace) { this->avoidance = avoidance; }

int Entity::getHp() {
	return this->hp;
}
int Entity::getMana()
{
	return this->mana;
}
int Entity::getDefence()
{
	return this->defence;
}
int Entity::getDamage()
{
	return this->damage;
}
int Entity::getActivity()
{
	return this->activity;
}
int Entity::getHitRate() { return this->hitRate; }
int Entity::getAvoidance() { return this->avoidance; }
