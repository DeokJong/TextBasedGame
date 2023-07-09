#include "WarriorActiveSkillList.h"
#include "Player.h"
PowerSlash::PowerSlash() : Skill("PowerSlash", 200, 1)
{
}

void PowerSlash::active() {
	cout << "�Ŀ� ������!...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
}

RagingCry::RagingCry() :Skill("RagingCry", 100, 1) {
}

void RagingCry::active() {
	cout << "�ݳ��� ��ħ!...\n���� ü���� 10%�� �Һ��ϰ� ���ݷ��� ������ŵ�ϴ�...\n";
	p.addBuff(new maxDamageBuff(this->rate, 4));
	p.addHp(-(p.getHp() / 10));
	p.setDamage(0);
}

DeathStrike::DeathStrike() : Skill("DeathStrike", 500, 1) {
}

void DeathStrike::active()
{
	cout << "������ �ϰ�...���� ü���� 10%�� �Һ��ϸ鼭 �����մϴ�...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
	p.addHp(-(p.getHp() / 10));
}