#ifndef RUN_H
#define RUN_H

#include "Character.h"
#include "Player.h"
#include <ncurses.h>
class Run{
	private:
		int highlight;
		int highlightClass;
		int highlightMenuPlay;
	public:
		Run();
		void Start();
		void MenuWindow();
		void CleanWindow();
		void PlayerCreate();
		void LoadSave();
		void PlayWindow(Character*);
		void PlayMenu(WINDOW*, Player*);
		void PrintCharacter(Character*);
		void Exit();
		~Run();

};

#endif
