#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Skill {
	string name;
protected:
	Skill(string, int, int);
public:
	string getName();
	int rate;
	int time;
	virtual void active() = 0;
};
