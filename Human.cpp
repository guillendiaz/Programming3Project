#include "Human.h"

Human::Human(){

}

Human::Human(string pName){
	this->Name = pName;
}

void Human::setWeapon(Weapon pWeapon){
	this->weapon = pWeapon;
}

Weapon Human::getWeapon(){
	return weapon;
}
void Human::setClass(string pClass){
	this->Class = pClass;
}

string Human::getClass(){
	return Class;
}

bool Human::Move(Coordinate){

}

int Human::Attack(){

}

int Human::CriticalRate(){

}

int Human::AvoidRate(){

}

int Human::HitRate(){

}

int* Human::ExperienceForm(){

}

Human::~Human(){

}
