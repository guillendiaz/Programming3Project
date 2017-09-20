#include "Archer.h"
#include <string>

using namespace std;

Archer::Archer(){
	this->HP = 50;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 20;
	this->Strength = 5;
	this->Magic = 2;
	this->Skill = 9;
	this->Speed = 10;
	this->Luck = 5;
	this->Defense = 2;
	this->Resistance = 20;
	this->Sprite = "A";
	this->Class = "Archer";
}

Archer::Archer(string pName){
  this->HP = 50;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 20;
	this->Strength = 5;
	this->Magic = 2;
	this->Skill = 9;
	this->Speed = 10;
	this->Luck = 5;
	this->Defense = 2;
	this->Resistance = 20;
  this->Name = pName;
	this->Sprite = "A";
	this->Class = "Archer";
}

bool Archer::Move(Coordinate){

}

int Archer::Attack(){

}

int Archer::CriticalRate(){

}

int Archer::AvoidRate(){

}

int Archer::HitRate(){

}

int* Archer::ExperienceForm(){

}

Archer::~Archer(){

}
