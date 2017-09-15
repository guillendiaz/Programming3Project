#include "Character.h"
#include <string>

using namespace std;

Character::Character(){

}

Character::Character(string pName){
	this->Name = pName;
}

void Character::setHP(int pHP){
	this->HP = pHP;
}

int  Character::getHP(){
	return HP;
}

void Character::setLevel(int pLevel){
	this->Level = pLevel;
}

int  Character::getLevel(){
	return Level;
}

void Character::setExperience(int pExp){
	this->Experience = pExp;
}

int  Character::getExperience(){
	return Experience;
}

void Character::setMaxExperience(int pMaxExp){
	this->MaxExperience = pMaxExp;
}

int  Character::getMaxExperience(){
	return MaxExperience;
}

void Character::setStrength(int pStrength){
	this->Strength = pStrength;
}

int  Character::getStrength(){
	return Strength;
}

void Character::setMagic(int pMagic){
	this->Magic = pMagic;
}

int  Character::getMagic(){
	return Magic;
}

void Character::setSkill(int pSkill){
	this->Skill = pSkill;
}

int  Character::getSkill(){
	return Skill;
}

void Character::setSpeed(int pSpeed){
	this->Speed = pSpeed;
}

int  Character::getSpeed(){
	return Speed;
}

void Character::setLuck(int pLuck){
	this->Luck = pLuck;
}

int  Character::getLuck(){
	return Luck;
}

void Character::setDefense(int pDefense){
	this->Defense = pDefense;
}

int  Character::getDefense(){
	return Defense;
}

void Character::setResistance(int pResistance){
	this->Resistance = pResistance;
}

int  Character::getResistance(){
	return Resistance;
}

void Character::setMovement(int pMovement){
	this->Movement = pMovement;
}

int  Character::getMovement(){
	return Movement;
}

void Character::setName(string pName){
	this->Name = pName;
}

string Character::getName(){
	return Name;
}

void Character::setSprite(string pSprite){
	this->Sprite = pSprite;
}

string Character::getSprite(){
	return Sprite;
}

bool Character::Move(Coordinate){

}

int  Character::Attack(){

}

int  Character::CriticalRate(){

}

int  Character::AvoidRate(){

}

int  Character::HitRate(){

}

int* Character::ExperienceForm(){

}

Character::~Character(){

}
