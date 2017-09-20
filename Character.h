#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Coordinate.h"
#include "Weapon.h"
using namespace std;


class Character{
	protected:
		int HP, Level, Experience, MaxExperience, Strength, Magic, Skill, Speed, Luck, Defense, Resistance;
		string Name, Class;
		Weapon weapon;
		vector<string> Sprite;
	public:
		Character();
		Character(string);

		void setHP(int);
		int getHP();
		void setLevel(int);
		int getLevel();
		void setExperience(int);
		int getExperience();
		void setMaxExperience(int);
		int getMaxExperience();
		void setStrength(int);
		int getStrength();
		void setMagic(int);
		int getMagic();
		void setSkill(int);
		int getSkill();
		void setSpeed(int);
		int getSpeed();
		void setLuck(int);
		int getLuck();
		void setDefense(int);
		int getDefense();
		void setResistance(int);
		int getResistance();
		void setName(string);
		string getName();
		void setSprite(string);
		vector<string> getSprite();
		void setWeapon(Weapon);
		Weapon getWeapon();
		void setClass(string);
		string getClass();

		virtual bool Move(Coordinate)=0;
		virtual int Attack()=0;
		virtual int CriticalRate()=0;
		virtual int AvoidRate()=0;
		virtual int HitRate()=0;
		virtual int* ExperienceForm()=0;
		virtual bool equals(Character*)const;
		~Character();

};

#endif
