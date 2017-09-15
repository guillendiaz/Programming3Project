#include "Weapon.h"
#include <string>

using namespace std;

Weapon::Weapon(){

}

Weapon::Weapon(string pName){
	this->Name = pName;
}

void Weapon::setType(string pType){
	this->Type = pType;
}

string Weapon::getType(){
	return Type;
}

void Weapon::setName(string pName){
	this->Name = pName;
}

string Weapon::getName(){
	return Name;
}

void Weapon::setMigth(int pMigth){
	this->Migth = pMigth;
}

int Weapon::getMigth(){
	return Migth;
}

void Weapon::setHit(int pHit){
	this->Hit = pHit;
}

int Weapon::getHit(){
	return Hit;
}

void Weapon::setRange(int pRange){
	this->Range = pRange;
}

int Weapon::getRange(){
	return Range;
}

Weapon::~Weapon(){

}
