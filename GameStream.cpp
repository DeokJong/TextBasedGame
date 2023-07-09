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
	cout << "*** 깊게 더 깊게.. ***\n\n";
}

void GameStream::showMenu() {
	cout << "옵션을 선택하세요...\n";
	cout << "게임시작 : 1      기록조회 : 2      끝내기 : 3";
}

int GameStream::getIntOption() {
	while (true) {
		int op;
		cout << ">> ";
		cin >> op;
		if (cin.fail() || op <= 0 || 4 <= op) {
			cout << "잘못된 입력입니다...";
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
		while (roomCount!=0){//첫 층은 생성자에서 초기화
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
	cout << "캐릭터를 생성합니다...\n";
	p.initPlayer();
	cout << endl << endl;
	cout << "캐릭터 생성을 완료하였습니다...\n";
	p.showStatus();
	system("pause");
}

void GameStream::enterUnderFloor() {
	cout << "층을 내려갑니다...\n";
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

int GameStream::currentStage = 1;