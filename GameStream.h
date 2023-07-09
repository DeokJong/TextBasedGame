#pragma once
#include "Player.h"
#include "EventHandler.h"
#include <fstream>
#include <random>

class GameStream{
	int roomCount;
	int maxC,minC;
	EventHandler eh;
public:
	static int currentStage;
	GameStream();

	void showGameName();

	void showMenu();

	int getIntOption();

	void gameStart();
	
	void makePlayer();

	void showScore();

	void enterUnderFloor();

	void showCurrentFloor();

	void doneFloor();

	int roll(int l, int r);

	void saveScore();

	void loadScore();

};