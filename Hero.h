#ifndef HERO_H
#define HERO_H
#include "Human.h"
#include <string>

using namespace std;

class Hero : public Human{
	private:

	public:
		Hero();
		Hero(string);
		
		bool Move(Coordinate);
		int Attack();
		int CriticalRate();
		int AvoidRate();
		int HitRate();
		int* ExperienceForm();
		~Hero();
	
};

#endif