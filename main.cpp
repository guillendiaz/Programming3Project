#include <iostream>
#include <ncurses.h>

//include Class of project
#include "Character.h"
#include "Hero.h"
#include "Mage.h"
#include "Archer.h"
#include "Weapon.h"
#include "Player.h"
#include "Run.h"

using namespace std;

int main(){
 Run* run = new Run();

	//Start the project in run class
	run->Start();
	return 0;
}
