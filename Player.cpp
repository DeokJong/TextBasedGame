#include "Player.h"
//const std::string& name, const std::string& job, int maxHp,
//int maxMana, int maxDamage, int minDamage
Player::Player() : Entity("","ÃÊº¸ÀÚ",100,30,20,10) {
	setName();
	addSkill(SF.getNewbySkill(1));
	addSkill(SF.getNewbySkill(2));
	addSkill(SF.getNewbySkill(0));
}

void Player::initRandom() {
	random_device rd;
	mt = *(new mt19937(rd()));
}

inline void Player::startRandom(int l, int r) {
	gen = uniform_int_distribution<int>(l, r);
}

void Player::addSkill(Skill* skill) {
	PlayerSkill.push_back(skill);
}

void Player::setSkill(Skill* skill, int index) {
	PlayerSkill[index] = skill;
}
Skill* Player::getSkill(int index)
{
	return PlayerSkill[index];
}

void Player::useSkill(int index) {
	PlayerSkill[index]->active();
}

void Player::addBuff(BuffBase* buff) {
	buffList.push_back(buff);
}



void Player::saveData() {
	this->TPD = Entity(p);
}

void Player::loadData() {
	this->setMaxHp(this->TPD.getMaxHp());
	this->setMaxMana(this->TPD.getMaxMana());
	this->setMaxDamage(this->TPD.getMaxDamage());
	this->setMinDamage(this->TPD.getMinDamage());
	this->setHp( this->TPD.getHp());
	this->setMana( this->TPD.getMana());
	this->setDefence( this->TPD.getDefence());
	this->setActivity(this->TPD.getActivity());
	this->setHitRate( this->TPD.getHitRate());
	this->setAvoidance( this->TPD.getAvoidance());
}

int Player::attack(int rate)
{
	startRandom(this->getMinDamage(), this->getMaxDamage());
	return (int)(gen(mt)*rate/100);
}


Player p;