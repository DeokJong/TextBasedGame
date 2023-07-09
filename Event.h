#pragma
#include <string>
#include <iostream>
#include "MonsterFactory.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Event {
	string eventTitle;
public:
	Event(string title = "NULL Event");
	~Event();
	virtual void excuteEvent() = 0;
};