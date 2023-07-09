#include "EventList.h"
#include "MonsterFactory.h"
#include "GameStream.h"

MonsterEncounter::MonsterEncounter() {
	Monster = MF.getMonster(GameStream::currentStage);
}

void MonsterEncounter::excuteEvent() {
	std::cout << "몬스터를 마주합니다...\n";
	int select;

	Sleep(500);
	cout << Monster->getName() << " 등장...\n\n";
	cout << Monster->getName() << "의 능력치 : ";
	Monster->showStatus();

	while (true) {

		Sleep(500);

		select = p.selectSkill();
		cout << endl;
		if (select == -1) {
			Sleep(500);
			p.showStatus();
			continue;
		}

		Monster->setDamage(Monster->attack(100));
		p.useSkill(select);

		Sleep(500);

		if (!Monster->hasHp(p.getDamage())) {
			cout << "몬스터가 죽었습니다!\n";
			p.removeBuff();
			p.killMonster();
			Monster->upLevel();
			delete Monster;
			return;
		}
		Monster->attacked(p.getDamage());
		cout << Monster->getName() << "의 남은 체력은 " << Monster->getHp()<<"\n\n";
		
		Sleep(500);

		cout <<Monster->getName()<<"의 공격! "<<Monster->getDamage()<<" Damage!\n";

		if (!p.hasHp(p.getDamage())) {
			cout << p.getName() << "님은 지하 저 깊은곳에서 차갑게 식어갑니다..." << endl;
			cout << "게임이 종료됩니다.";
			exit(0);
		}
		p.attacked(p.getDamage());
		cout << p.getName() << "의 남은 체력은 " << p.getHp() << "\n\n";

	}
}

void Ambushed::excuteEvent() {
	cout << "이런..! 기습을 당했습니다..피해를 받고 시작합니다..\n";
	Event* temp = new MonsterEncounter();
	p.attacked((*temp).Monster->attack(100));
	temp->excuteEvent();
	delete temp;
}

void FindArtifact::excuteEvent() {
	cout << "당신은 신성한 유물을 찾았습니다...\n\n";

	if (p.getJob() == "초보자") {
		cout << "당신은 전사로 전직하였습니다...\n\n";
		p.setJob("전사");
		p.changeClass();
	}
	else { 
		cout << "무작위 스킬 한개가 강화됩니다...\n\n"; 
		int temp = roll(0, 5);
		cout<<p.getSkill(temp)->getName()<<"이 강화됩니다....\n";
		p.getSkill(temp)->rate+= p.getSkill(temp)->rate/3;
	}
	
}

int roll(int l, int r) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(l, r);
	return dis(gen);
}

void FindTemplate::excuteEvent() {
	cout << "당신은 신성한 제단을 마주하였습니다....\n";
	cout << "당신의 능력치가 상승합니다....\n";
	p.upLevel();
}

void FindWell::excuteEvent() {
	cout << "당신은 아무도 없는 평화로운 우물을 찾았습니다.. 체력이 회복합니다...\n\n";
	p.setHp(p.getMaxHp());
}

void TrapRoom::excuteEvent() {
	cout << "당신은 함정에 걸렸습니다! 최대 체력의 10%만큼 체력이 감소합니다..\n";
	if (!p.hasHp(p.getMaxHp() / 10)) {
		cout << p.getName() << "님은 지하 저 깊은곳에서 차갑게 식어갑니다..." << endl;
		cout << "게임이 종료됩니다.";
		exit(0);
	}
	p.addHp(-(p.getMaxHp() / 10));
}

void Ambush::excuteEvent() {
	cout << "당신은 기습을 합니다...몬스터는 피해를 받고 시작합니다\n";
	Event* temp = new MonsterEncounter();
	(*temp).Monster->attacked(p.attack(300));
	temp->excuteEvent();
	delete temp;
}
