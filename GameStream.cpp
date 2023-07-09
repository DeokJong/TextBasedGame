#include "GameStream.h"

GameStream::GameStream() :minC(5), maxC(10) {
	showGameName();
	roomCount = roll(this->minC, this->maxC);
	int option = 0;
	while (option != 3) {
		showMenu();
		option = getIntOption();

		switch (option)
		{
		case 1:
			gameStart();
			break;
		case 2:
			showScore();
			break;
		}
	}
}

void GameStream::showGameName() {
	cout << "*** ��� �� ���.. ***\n\n";
}

void GameStream::showMenu() {
	cout << "�ɼ��� �����ϼ���...\n";
	cout << "���ӽ��� : 1      �����ȸ : 2      ������ : 3";
}

int GameStream::getIntOption() {
	while (true) {
		int op;
		cout << ">> ";
		cin >> op;
		if (cin.fail() || op <= 0 || 4 <= op) {
			cout << "�߸��� �Է��Դϴ�...";
			cin.clear();
			cin.ignore();
			continue;
		}
		return op;
	}

}

void GameStream::gameStart() {
	makePlayer();
	while (this->currentStage != 11) {
		enterUnderFloor();
		while (roomCount!=0){//ù ���� �����ڿ��� �ʱ�ȭ
			showCurrentFloor();
			Event* temp=eh.getRandomEvent();
			temp->excuteEvent();
			delete temp;
		}
		doneFloor();
	}
}

void GameStream::makePlayer(){
	system("cls");
	cout << "ĳ���͸� �����մϴ�...\n";
	p.initPlayer();
	cout << endl << endl;
	cout << "ĳ���� ������ �Ϸ��Ͽ����ϴ�...\n";
	p.showStatus();
	system("pause");
}

void GameStream::enterUnderFloor() {
	cout << "���� �������ϴ�...\n";
}

void GameStream::showCurrentFloor() {
	cout << " - ���� �� : " << currentStage << endl;
	cout << " - ���� �� ���� : " << roomCount << endl;
}

void GameStream::doneFloor() {
	cout << "���� ���� ���� ���� �����ϴ�\n";
	system("pause");
	system("cls");

	currentStage++;
	minC += (minC / 2);
	maxC += (maxC / 2);
	roomCount = roll(minC, maxC);
}

int GameStream::roll(int l, int r) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(l, r);
	return dis(gen);
}

int GameStream::currentStage = 1;