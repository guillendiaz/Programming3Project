#ifndef HUMAN_H
#define HUMAN_H
#include "Character.h"
#include "Weapon.h"
#include <string>

using namespace std;

class Human : public Character{
	protected:
		string Class;
		Weapon weapon;
	public:
		Human();
		Human(string);
		void setWeapon(Weapon);
		Weapon getWeapon();
		void setClass(string);
		string getClass();

		bool Move(Coordinate);
		int Attack();
		int CriticalRate();
		int AvoidRate();
		int HitRate();
		int* ExperienceForm();
		~Human();
	
};

#endif