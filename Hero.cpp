#include "Hero.h"
#include <string>
#include <iostream>
using namespace std;

Hero::Hero(){
	Sprite.push_back ( "   +[]+   \n");
	Sprite.push_back ( "  |****|  \n");
	Sprite.push_back ( "  |****|  \n");
	Sprite.push_back ( "    **    \n");
	Sprite.push_back ( "<<<****>>>\n");
	Sprite.push_back ( "| *++++* |\n");
	Sprite.push_back ( "  o++++o  \n");
	Sprite.push_back ( "   +  +   \n");
	Sprite.push_back ( "  ++  ++  \n");
	this->HP = 100;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 30;
	this->Strength = 10;
	this->Magic = 2;
	this->Skill = 5;
	this->Speed = 3;
	this->Luck = 4;
	this->Defense = 8;
	this->Resistance = 10;
	this->Class = "Hero";
}

Hero::Hero(string pName){
	this->HP = 100;
	this->Level = 1;
	this->Experience = 0;
	this->MaxExperience = 30;
	this->Strength = 10;
	this->Magic = 2;
	this->Skill = 5;
	this->Speed = 3;
	this->Luck = 4;
	this->Defense = 8;
	this->Resistance = 10;
	this->Name = pName;
	this->Class = "Hero";
}

bool Hero::Move(Coordinate){

}

int Hero::Attack(){

}

int Hero::CriticalRate(){

}

int Hero::AvoidRate(){

}

int Hero::HitRate(){

}

int* Hero::ExperienceForm(){

}

Hero::~Hero(){

}
