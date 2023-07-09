#pragma once
#include <string>
#include <iostream>
#include <random>
using namespace std;
class Entity {
	string name;
	string job;

	int maxHp;
	int maxMana;
	int maxDamage;
	int minDamage;

	int hp;
	int mana;

	int defence;
	int activity;
	int hitRate;
	int avoidance;

	int damage;
	int level;
protected:

	Entity(string name, string job, int maxHp, int maxMana, int maxDamage, int minDamage);
	void setJob(string);
	void setName();

	int roll(int l, int r);
	virtual void upLevel();

public:
	Entity();
	Entity(const Entity& e);

	void setMaxHp(int);
	void setMaxMana(int);
	void setMaxDamage(int);
	void setMinDamage(int);

	void setHp(int hp);
	void setMana(int mana);
	void setDefence(int defence);
	void setActivity(int activity);
	void setHitRate(int hitRate);
	void setAvoidance(int Avoidnace);

	void setDamage(int damage);
	void setLevel(int level);

	string getName();

	int getMaxHp();
	int getMaxMana();
	int getMaxDamage();
	int getMinDamage();

	int getHp();
	int getMana();
	int getDefence();
	int getActivity();
	int getHitRate();
	int getAvoidance();

	int getDamage();
	int getLevel();

	int attack(int rate);
};
