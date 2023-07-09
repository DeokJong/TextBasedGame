#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Skill {
	string name;
	int type;//0: attack skill, 1:passive
protected:
	Skill(string, int, int);
	string getName();
public:
	int rate;
	virtual void active() = 0;
};
