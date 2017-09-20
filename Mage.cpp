#include "Mage.h"
#include <string>

using namespace std;

Mage::Mage(){
	this->HP = 80;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 25;
	this->Strength = 7;
	this->Magic = 8;
	this->Skill = 7;
	this->Speed = 6;
	this->Luck = 3;
	this->Defense = 3;
	this->Resistance = 15;
	this->Sprite = "M";
	this->Class = "Mage";
}

Mage::Mage(string pName){
	this->HP = 80;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 25;
	this->Strength = 7;
	this->Magic = 8;
	this->Skill = 7;
	this->Speed = 6;
	this->Luck = 3;
	this->Defense = 3;
	this->Resistance = 15;
	this->Name = pName;
	this->Sprite = "M";
	this->Class = "Mage";
}

bool Mage::Move(Coordinate){

}

int Mage::Attack(){

}

int Mage::CriticalRate(){

}

int Mage::AvoidRate(){

}

int Mage::HitRate(){

}

int* Mage::ExperienceForm(){

}

Mage::~Mage(){

}
