#ifndef MAGE_H
#define MAGE_H
#include "Character.h"
#include <string>

using namespace std;

class Mage : public Character{
	private:

	public:
		Mage();
		Mage(string);

		bool Move(Coordinate);
		int Attack();
		int CriticalRate();
		int AvoidRate();
		int HitRate();
		int* ExperienceForm();
		~Mage();

};

#endif
