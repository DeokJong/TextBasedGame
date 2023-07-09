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
	cout << "*** C++ Dungeon 탐험 ***\n\n";
}

void GameStream::showMenu() {
	cout << "옵션을 선택하세요...\n";
	cout << "게임시작 : 1      기록조회 : 2      끝내기 : 3";
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
		cout << "잘못된 입력입니다...다시 입력하세요\n";
	}

}

void GameStream::gameStart() {
	makePlayer();
	while (this->currentStage != 11) {
		enterUnderFloor();
		while (roomCount != 0) {//첫 층은 생성자에서 초기화
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
	cout << "   ★축하합니다!★   \n    당신은 모든 구역을 타파하였습니다!\n";
	saveScore();
}

void GameStream::makePlayer() {
	system("cls");
	cout << "캐릭터를 생성합니다...\n";
	p.initPlayer();
	cout << endl << endl;
	cout << "캐릭터 생성을 완료하였습니다...\n";
	p.showStatus();
	system("pause");
	system("cls");
}

void GameStream::showScore() {
	cout << "역대 기록을 조회합니다...\n\n";
	loadScore();

	system("pause");
	system("cls");
}

void GameStream::enterUnderFloor() {
	cout << "층을 내려갑니다...\n\n";
}

void GameStream::showCurrentFloor() {
	cout << " - 현재 층 : " << currentStage << endl;
	cout << " - 남은 방 갯수 : " << roomCount << endl;
}

void GameStream::doneFloor() {
	cout << "현재 층에 남은 방이 없습니다\n";
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
		cout << "아직 기록이 없습니다!\n";
		cout << "한번 플레이 해보세요!\n\n";
		return;
	}

	string line;
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
}

int GameStream::currentStage = 4;
