#include "WarriorActiveSkillList.h"
#include "Player.h"
PowerSlash::PowerSlash() : Skill("PowerSlash", 200,1)
{
}

void PowerSlash::active(){
	cout << "�Ŀ� ������!\n";
	p.attack(this->rate);
}

RagingCry::RagingCry() :Skill("RagingCry", 100,1){
}

void RagingCry::active(){
	cout << "�ݳ��� ��ħ!\n";

}

DeathStrike::DeathStrike() : Skill("DeathStrike", 300,1){
}	


void DeathStrike::active()
{
	cout << "������ �ϰ�";
	p.attack(this->rate);
}
