#include "WarriorActiveSkillList.h"
#include "Player.h"
PowerSlash::PowerSlash() : Skill("PowerSlash", 200, 1)
{
}

void PowerSlash::active() {
	cout << "파워 슬래쉬!...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
}

RagingCry::RagingCry() :Skill("RagingCry", 100, 1) {
}

void RagingCry::active() {
	cout << "격노의 외침!...\n현재 체력의 10%를 소비하고 공격력을 증가시킵니다...\n";
	p.addBuff(new maxDamageBuff(this->rate, 4));
	p.addHp(-(p.getHp() / 10));
	p.setDamage(0);
}

DeathStrike::DeathStrike() : Skill("DeathStrike", 500, 1) {
}

void DeathStrike::active()
{
	cout << "죽음의 일격...현재 체력의 10%를 소비하면서 공격합니다...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
	p.addHp(-(p.getHp() / 10));
}