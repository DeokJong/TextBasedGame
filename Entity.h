#pragma once
#include <string>
#include <iostream>
using namespace std;
class Entity{
	string name;
	string job;
	int hp;
	int mana;
	int defence;
	int damage;
	int activity;
	int hitRate;
	int avoidance;
protected:
	Entity(string name="", int hp=0, int mana = 0, int defence = 0, int damage = 0, int activity = 0);
	Entity(const Entity& e);
	void setJob(string);
	void setName();
public:
	void setHp(int hp);
	void setMana(int mana);
	void setDefence(int defence);
	void setDamage(int damage);
	void setActivity(int activity);
	void setHitRate(int hitRate);
	void setAvoidance(int Avoidnace);

	int getHp();
	int getMana();
	int getDefence();
	int getDamage();
	int getActivity();
	int getHitRate();
	int getAvoidance();
};

