#include "Player.h"
//const std::string& name, const std::string& job, int maxHp,
//int maxMana, int maxDamage, int minDamage
Player::Player() : Entity("","ÃÊº¸ÀÚ",100,30,20,10) {
	setName();
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

void Player::checkBuffList() {
	for (auto it = buffList.begin(); it != buffList.end(); it++) {
		(*it)->check();
	}

	while (true) {
		bool done = false;
		int loopCount = 0;
		for (auto it = buffList.begin(); it != buffList.end(); it++, loopCount++) {
			if (!((*it)->isTime())) {
				(*it)->deAllocate();
				delete* it;
				buffList.erase(it);
				break;
			}


			if (it + 1 == buffList.end())done = true;
		}

		if (done || loopCount == 0) break;
	}
}
Player p;