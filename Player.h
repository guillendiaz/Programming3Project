#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <fstream>
#include <iostream>
#include <ncurses.h>
#include "Character.h"

using namespace std;

class Player {
  private:
    Character* character;
    string Name;
    int xLoc, yLoc, xMax, yMax;
    WINDOW * window;
  public:
    Player();
    Player(WINDOW *, int, int, Character*);
    Character* getCharacter();

    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
    int getMv();
    int getxLoc();
    int getyLoc();
    void Display();

    friend ostream& operator<<(ostream&, const Player&);
		friend istream& operator>>(istream&, Player&);

    ~Player();
};

#endif
