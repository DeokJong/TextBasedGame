#include "WarriorActiveSkillList.h"
#include "Player.h"
PowerSlash::PowerSlash() : Skill("PowerSlash", 200,1)
{
}

void PowerSlash::active(){
	cout << "파워 슬래쉬!\n";
	p.attack(this->rate);
}

RagingCry::RagingCry() :Skill("RagingCry", 100,1){
}

void RagingCry::active(){
	cout << "격노의 외침!\n";

}

DeathStrike::DeathStrike() : Skill("DeathStrike", 300,1){
}	


void DeathStrike::active()
{
	cout << "죽음의 일격";
	p.attack(this->rate);
}
