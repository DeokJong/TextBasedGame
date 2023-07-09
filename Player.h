#pragma once
#include "Entity.h"
#include "SkillFactory.h"
#include "StandardBuff.h"
#include <random>
#include <iostream>
#include <vector>


class Player : public Entity {
	vector<BuffBase*> buffList;
	vector<Skill*> PlayerSkill;
	SkillFactory SF;
public:
	Player();
	Entity TPD;

	void addSkill(Skill* skill);
	void setSkill(Skill*,int index);
	Skill* getSkill(int index);
	void useSkill(int index);

	void addBuff(BuffBase* buff);

	void saveData();
	void loadData();
	

	void checkBuffList();
	
	void initPlayer();
	
	void showStatus() {
		cout << "    " << getName() << "ÀÇ ½ºÅÈ" << endl;
		cout << " - HP         : " << getMaxHp() << endl;
		cout << " - Mana       : " << getMana() << endl;
		cout << " - Avg Damage : " << (int)((getMaxDamage()+getMinDamage())/2) << endl;
		cout << " - Defence    : " << getDefence() << endl;
		cout << " - Hit Rate   : " << getHitRate() <<"%" << endl;
		cout << " - Avoidance  : " << getAvoidance()<<"%" << endl;
		cout << " - Level      : " << getLevel() << endl;
	}
};

extern Player p;