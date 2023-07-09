#include "NewbyActiveSkillList.h"
#include "Player.h"

Hit::Hit() : Skill("Hit", 100, 0) {}
void Hit::active() {
	cout << "무기로 내려칩니다...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
}

Roll::Roll() : Skill("Roll", 20, 1){}

void Roll::active()
{
	cout << "공격을 피하기 위해 구릅니다...\n";
	p.setDamage(0);
	p.addBuff(new avoidanceBuff(this->rate, 1));
}

Heal::Heal() :Skill("Heal", 50, 1){}

void Heal::active()
{
	cout << "붕대를 감습니다...일시적으로 회피율이 감소합니다...\n";
	p.setDamage(0);
	p.addHp(this->rate);
	p.addBuff(new avoidanceBuff(-10, this->time));
}