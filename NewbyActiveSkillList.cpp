#include "NewbyActiveSkillList.h"
#include "Player.h"

Hit::Hit() : Skill("Hit", 100, 1) {}
void Hit::active() {
	cout << this->getName() << endl;
	cout << "무기로 내려칩니다.\n";
	p.setDamage(p.attack(this->rate));
}

Roll::Roll() : Skill("Roll", 20, 1)
{
}

void Roll::active()
{
	cout << this->getName() << endl;
	cout << "한번 구릅니다. 회피율이 증가합니다.\n";
	p.addBuff(new defenceBuff(20, 1));
}

Guard::Guard() :Skill("Guard", 20, 1)
{
}

void Guard::active()
{
	cout << this->getName() << endl;
	cout << "방어의 자세를 취합니다. 방어력이 증가합니다.\n";
}