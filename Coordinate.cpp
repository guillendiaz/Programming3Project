#include "Coordinate.h"

Coordinate::Coordinate(){

}

Coordinate::Coordinate(int pX, int pY){
	this->X = pX
	this->Y = pY
}

void Coordinate::setX(int pX){
	this-> X = pX
}

int Coordinate::getX(){
	return X;
}

void Coordinate::setY(int pY){
	this->Y = pY;
}

int Coordinate::getY(){
	return Y;
}

Coordinate::~Coordinate(){

}
