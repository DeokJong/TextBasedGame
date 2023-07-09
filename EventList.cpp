#include "EventList.h"
#include "MonsterFactory.h"
#include "GameStream.h"

MonsterEncounter::MonsterEncounter() {
	Monster = MF.getMonster(GameStream::currentStage);
}

void MonsterEncounter::excuteEvent() {
	std::cout << "���͸� �����մϴ�...\n";
	int select;

	Sleep(500);
	cout << Monster->getName() << " ����...\n\n";
	cout << Monster->getName() << "�� �ɷ�ġ : ";
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
			cout << "���Ͱ� �׾����ϴ�!\n";
			p.removeBuff();
			p.killMonster();
			Monster->upLevel();
			delete Monster;
			return;
		}
		Monster->attacked(p.getDamage());
		cout << Monster->getName() << "�� ���� ü���� " << Monster->getHp()<<"\n\n";
		
		Sleep(500);

		cout <<Monster->getName()<<"�� ����! "<<Monster->getDamage()<<" Damage!\n";

		if (!p.hasHp(p.getDamage())) {
			cout << p.getName() << "���� ���� �� ���������� ������ �ľ�ϴ�..." << endl;
			cout << "������ ����˴ϴ�.";
			exit(0);
		}
		p.attacked(p.getDamage());
		cout << p.getName() << "�� ���� ü���� " << p.getHp() << "\n\n";

	}
}

void Ambushed::excuteEvent() {
	cout << "�̷�..! ����� ���߽��ϴ�..���ظ� �ް� �����մϴ�..\n";
	Event* temp = new MonsterEncounter();
	p.attacked((*temp).Monster->attack(100));
	temp->excuteEvent();
	delete temp;
}

void FindArtifact::excuteEvent() {
	cout << "����� �ż��� ������ ã�ҽ��ϴ�...\n\n";

	if (p.getJob() == "�ʺ���") {
		cout << "����� ����� �����Ͽ����ϴ�...\n\n";
		p.setJob("����");
		p.changeClass();
	}
	else { 
		cout << "������ ��ų �Ѱ��� ��ȭ�˴ϴ�...\n\n"; 
		int temp = roll(0, 5);
		cout<<p.getSkill(temp)->getName()<<"�� ��ȭ�˴ϴ�....\n";
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
	cout << "����� �ż��� ������ �����Ͽ����ϴ�....\n";
	cout << "����� �ɷ�ġ�� ����մϴ�....\n";
	p.upLevel();
}

void FindWell::excuteEvent() {
	cout << "����� �ƹ��� ���� ��ȭ�ο� �칰�� ã�ҽ��ϴ�.. ü���� ȸ���մϴ�...\n\n";
	p.setHp(p.getMaxHp());
}

void TrapRoom::excuteEvent() {
	cout << "����� ������ �ɷȽ��ϴ�! �ִ� ü���� 10%��ŭ ü���� �����մϴ�..\n";
	if (!p.hasHp(p.getMaxHp() / 10)) {
		cout << p.getName() << "���� ���� �� ���������� ������ �ľ�ϴ�..." << endl;
		cout << "������ ����˴ϴ�.";
		exit(0);
	}
	p.addHp(-(p.getMaxHp() / 10));
}

void Ambush::excuteEvent() {
	cout << "����� ����� �մϴ�...���ʹ� ���ظ� �ް� �����մϴ�\n";
	Event* temp = new MonsterEncounter();
	(*temp).Monster->attacked(p.attack(300));
	temp->excuteEvent();
	delete temp;
}
