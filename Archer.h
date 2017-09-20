#ifndef ARCHER_H
#define ARCHER_H
#include "Character.h"
#include <string>

using namespace std;

class Archer : public Character{
	private:

	public:
		Archer();
		Archer(string);

		bool Move(Coordinate);
		int Attack();
		int CriticalRate();
		int AvoidRate();
		int HitRate();
		int* ExperienceForm();
		~Archer();

};

#endif
