#include "Player.h"

Player::Player(){

}

Player::Player(WINDOW * windplay, int y, int x, Character* charac){
  this->Name = charac->getName();
  this->character = charac;
  this->window = windplay;
  this->yLoc = y;
  this->xLoc = x;
  getmaxyx(windplay, yMax, xMax);
  keypad(windplay, true);

}

Character* Player::getCharacter(){
  return character;
}

void Player::MoveUp(){
  mvwaddch(window, yLoc, xLoc, ' ');
  yLoc--;
  if (yLoc < 1) {
    yLoc = 1;
  }//end if
}

void Player::MoveDown(){
  mvwaddch(window, yLoc, xLoc, ' ');
  yLoc++;
  if (yLoc > yMax-2) {
    yLoc = yMax-2;
  }
}

void Player::MoveLeft(){
  mvwaddch(window, yLoc, xLoc, ' ');
  xLoc--;
  if (xLoc < 1) {
    xLoc = 1;
  }
}

void Player::MoveRight(){
  mvwaddch(window, yLoc, xLoc, ' ');
  xLoc++;
  if (xLoc > xMax-2) {
    xLoc = xMax-2;
  }
}

int Player::getMv(){
  int choice = wgetch(window);
  switch (choice) {
    case KEY_UP:
      MoveUp();
      break;
    case KEY_DOWN:
      MoveDown();
      break;
    case KEY_LEFT:
      MoveLeft();
      break;
    case KEY_RIGHT:
      MoveRight();
      break;
    default:
      break;
  }
  return choice;
}

int Player::getxLoc(){
  return xLoc;
}

int Player::getyLoc(){
  return yLoc;
}

void Player::Display(){
  mvwaddch(window, yLoc, xLoc, 'O');
}

ostream& operator<<(ostream& out, const Player& save){
  out<<save.Name<<";"<<save.character->getHP()<<";"<<save.character->getLevel()<<";"
    <<save.character->getExperience()<<";"<<save.character->getMaxExperience()<<";"
    <<save.character->getStrength()<<";"<<save.character->getMagic()<<";"<<save.character->getSkill()<<";"
    <<save.character->getSpeed()<<";"<<save.character->getLuck()<<";"<<save.character->getDefense()<<";"
    <<save.character->getResistance()<<";"<<save.character->getClass()<<";"<<save.yLoc<<";"<<save.xLoc<<";";

    return out;
}

istream& operator>>(istream& in, Player& save){
  
}

Player::~Player(){

}
