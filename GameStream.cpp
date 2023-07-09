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
	cout << "*** C++ Dungeon Ž�� ***\n\n";
}

void GameStream::showMenu() {
	cout << "�ɼ��� �����ϼ���...\n";
	cout << "���ӽ��� : 1      �����ȸ : 2      ������ : 3";
}

int GameStream::getIntOption() {
	while (true) {
		bool isNumber = true;
		string op;
		cout << ">> ";
		getline(cin, op);

		if (op == "1")return 1;
		else if (op == "2")return 2;
		else if (op == "3")return 3;
		cout << "�߸��� �Է��Դϴ�...�ٽ� �Է��ϼ���\n";
	}

}

void GameStream::gameStart() {
	makePlayer();
	while (this->currentStage != 11) {
		enterUnderFloor();
		while (roomCount != 0) {//ù ���� �����ڿ��� �ʱ�ȭ
			showCurrentFloor();
			Event* temp = eh.getRandomEvent();
			temp->excuteEvent();
			cout << endl << endl;
			delete temp;
			system("pause");
			system("cls");
			roomCount--;
		}
		doneFloor();
	}
	cout << "   �������մϴ�!��   \n    ����� ��� ������ Ÿ���Ͽ����ϴ�!\n";
	saveScore();
}

void GameStream::makePlayer() {
	system("cls");
	cout << "ĳ���͸� �����մϴ�...\n";
	p.initPlayer();
	cout << endl << endl;
	cout << "ĳ���� ������ �Ϸ��Ͽ����ϴ�...\n";
	p.showStatus();
	system("pause");
	system("cls");
}

void GameStream::showScore() {
	cout << "���� ����� ��ȸ�մϴ�...\n\n";
	loadScore();

	system("pause");
	system("cls");
}

void GameStream::enterUnderFloor() {
	cout << "���� �������ϴ�...\n\n";
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

void GameStream::saveScore() {
	ofstream fout("./Score.txt", ios::app);
	fout << " - Name       : " << p.getName() << endl;
	fout << " - Job        : " << p.getJob() << endl;
	fout << " - Max Hp     : " << p.getMaxHp() << endl;
	fout << " - Max Damage : " << p.getMaxDamage() << endl;
	fout << " - Min Damage : " << p.getMinDamage() << endl;
	fout << " - Max Mana   : " << p.getMaxMana() << endl;
	fout << " - Level      : " << p.getLevel() << endl;
	fout << " - Kill Count : " << p.getKillCount() << endl;
	fout << endl << endl;
	fout.close();
}

void GameStream::loadScore() {
	ifstream fin("./Score.txt", ios::binary);
	if (!fin.is_open()) {
		cout << "���� ����� �����ϴ�!\n";
		cout << "�ѹ� �÷��� �غ�����!\n\n";
		return;
	}

	string line;
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
}

int GameStream::currentStage = 4;
