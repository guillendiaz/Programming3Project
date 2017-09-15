#ifndef WEAPON_H
#define WEAPON_H
#include <string>

using namespace std;

class Weapon{
	protected:
		string Type, Name;
		int Migth, Hit, Range;
	public:
		Weapon();
		Weapon(string);
		void setType(string);
		string getType();
		void setName(string);
		string getName();
		void setMigth(int);
		int getMigth();
		void setHit(int);
		int getHit();
		void setRange(int);
		int getRange();
		~Weapon();
	
};

#endif