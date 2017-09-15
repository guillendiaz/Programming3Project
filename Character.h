#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "Coordinate.h"

using namespace std;


class Character{
	protected:
		int HP, Level, Experience, MaxExperience, Strength, Magic, Skill, Speed, Luck, Defense, Resistance, Movement;
		string Name, Sprite;
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
		void setMovement(int);
		int getMovement();
		void setName(string);
		string getName();
		void setSprite(string);
		string getSprite();

		virtual bool Move(Coordinate)=0;
		virtual int Attack()=0;
		virtual int CriticalRate()=0;
		virtual int AvoidRate()=0;
		virtual int HitRate()=0;
		virtual int* ExperienceForm()=0;
		~Character();
	
};

#endif