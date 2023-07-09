#include "NewbyActiveSkillList.h"
#include "Player.h"

Hit::Hit() : Skill("Hit", 100, 0) {}
void Hit::active() {
	cout << "����� ����Ĩ�ϴ�...";
	p.setDamage(p.attack(this->rate));
	cout << p.getDamage() << " Damage!\n";
}

Roll::Roll() : Skill("Roll", 20, 1){}

void Roll::active()
{
	cout << "������ ���ϱ� ���� �����ϴ�...\n";
	p.setDamage(0);
	p.addBuff(new avoidanceBuff(this->rate, 1));
}

Heal::Heal() :Skill("Heal", 50, 1){}

void Heal::active()
{
	cout << "�ش븦 �����ϴ�...�Ͻ������� ȸ������ �����մϴ�...\n";
	p.setDamage(0);
	p.addHp(this->rate);
	p.addBuff(new avoidanceBuff(-10, this->time));
}