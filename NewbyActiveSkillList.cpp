#include "NewbyActiveSkillList.h"
#include "Player.h"
	


Hit::Hit() : Skill("Hit", 100,1) {}
void Hit::active(){
	cout << this->getName()<<endl;
	cout << "����� ����Ĩ�ϴ�.\n";
	p.attack(this->rate);
}

Roll::Roll() : Skill("Roll",20,1)
{
}

void Roll::active()
{	
	cout << this->getName() << endl;
	cout << "�ѹ� �����ϴ�. ȸ������ �����մϴ�.\n";
	p.addBuff(new defenceBuff(20, 1));

}

Guard::Guard() :Skill("Guard", 20,1)
{
}

void Guard::active()
{
	cout << this->getName() << endl;
	cout << "����� �ڼ��� ���մϴ�. ������ �����մϴ�.\n";
}
