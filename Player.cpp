#include "Player.h"

Player::Player() : Entity("", 100, 30, 5, 10, 0) {
	setName();
	setJob("Newby");
	addSkill(SF.getNewbySkill(1));
	addSkill(SF.getNewbySkill(2));
	addSkill(SF.getNewbySkill(0));
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



void Player::saveData() {
	this->TPD.setHp(Entity::hp);
	this->TPD.setMana(Entity::mana);
	this->TPD.setDefence(Entity::defence);
	this->TPD.setDamage(Entity::damage);
	this->TPD.setActivity(Entity::activity);
}

void Player::loadData() {
	setHp(TPD.getHp());
	setMana(TPD.getMana());
	setDefence(TPD.getDefence());
	setDamage(TPD.getDamage());
	setActivity(TPD.getActivity());
}

int Player::attack(int rate)
{
	return (int)damage * rate / 100;
}


Player p;