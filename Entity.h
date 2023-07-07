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
protected:
	mt19937 mt;
	uniform_int_distribution<int> gen;

	Entity(string name="", string job="", int maxHp=1, int maxMana=1, int maxDamage=1, int minDamage=1);
	void setJob(string);
	void setName();

	void initRandom();
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

	int attack(int rate);
};
