#include "Player.h"
//std::string name, string job, int maxHp, int maxMana, int maxDamage, int minDamage
Player::Player() : Entity("", "초보자", 100, 30, 20, 10) {
	addSkill(SF.getNewbySkill(1));
	addSkill(SF.getNewbySkill(2));
	addSkill(SF.getNewbySkill(0));
	killCounter = 0;
}

void Player::killMonster() {
	killCounter++;
	if (killCounter% 5==0) {
		cout << getName() << "님이 레벨업 하셧습니다! 스탯이 상승합니다!\n\n";
		upLevel();
	}
}

void Player::addSkill(Skill* skill) {
	PlayerSkill.push_back(skill);
}

void Player::changeClass() {
	addSkill(SF.getWarriorSkill(1));
	addSkill(SF.getWarriorSkill(2));
	addSkill(SF.getWarriorSkill(0));
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

void Player::removeBuff() {

	while (buffList.size() != 0) {
		auto it = buffList.begin();
		delete* it;
		buffList.erase(it);
	}

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
				delete* it;
				buffList.erase(it);
				break;
			}
			if (it + 1 == buffList.end())done = true;
		}
		if (done || loopCount == 0) break;
	}
}
void Player::initPlayer() {
	//HP 90~120
	//MinDamage - MaxDamage = -10
	//8~15
	//MaxMana 20~30
	//Defence 5~10;
	setName();
	setMaxHp(roll(300, 500));
	setHp(getMaxHp());
	int temp = roll(12, 15);
	setMaxDamage(temp + 5);
	setMinDamage(temp - 5);
	setDefence(roll(5, 10));
}

int Player::selectSkill() {
	string op;
	cout << "===Skill List===\n";
	int i = 1;
	cout << " - 0 : 스탯보기" << endl;
	for (auto it = PlayerSkill.begin(); it != PlayerSkill.end(); it++, i++) {
		cout << " - " << i << " : " << (*it)->getName() << endl;
	}

	while (true) {
		bool isNumber = true;;

		cout << " : ";
		getline(cin, op,'\n');

		for (char c : op) {
			if (!isdigit(c)) {
				isNumber = false;
				break;
			}
		}

		if (!isNumber||op.size() >= 2|| stoi(op)<0 || i<stoi(op)) {
			cout << "잘못된 입력입니다! 다시 입력해주세요\n";
			continue;
		}
		break;
	}

	return stoi(op) - 1;
}
void Player::addHp(int rate) {
	int temp = p.getHp() + rate;
	if (temp > p.getMaxHp()) p.setHp(p.getMaxHp());
	else p.setHp(temp);
}
void Player::upLevel() {
	setMaxHp(getMaxHp() + getMaxHp() / 20);
	setMaxMana(getMaxMana() + getMaxMana() / 20);
	setMaxDamage(getMaxDamage() + getMaxDamage() / 20);
	setMinDamage(getMinDamage() + getMinDamage() / 20);
	setDefence(getDefence() + getDefence() / 20);
	setHp(getMaxHp());
	setLevel(getLevel() + 1);
}
Player p;