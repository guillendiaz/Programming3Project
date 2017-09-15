#include "Hero.h"
#include <string>

using namespace std;

Hero::Hero(){

}

Hero::Hero(string pName){
	this->Name = pName;
	this->Type = "Hero";
	
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
