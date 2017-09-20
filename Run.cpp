#include "Run.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Character.h"
#include "Hero.h"
#include "Mage.h"
#include "Archer.h"
#include "Player.h"

using namespace std;

//Define Color
#define NORMAL       0
#define BRILLO       1
#define SEMIBRILLO   2
#define INTERMITENTE 5
#define INVERSO      7
#define NEGRO       30
#define ROJO        31
#define VERDE       32
#define MARRON      33
#define AZUL        34
#define ROSA        35
#define CELESTE     36
#define BLANCO      37

Run::Run(){

}

void Run::Start(){
	MenuWindow();
	if (highlight == 0) {
		CleanWindow();
		PlayerCreate();
	} else if (highlight == 1) {

	} else if (highlight == 2) {
		Exit();
	}//end if/else
}

void Run::MenuWindow(){
	//Start ncurses
	initscr();
	cbreak();
	//get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	//Create a window for name of project
	WINDOW *win = newwin(20, 100, (yMax/2)-21, (xMax/2)-50);
	char space = ' ';
	box(win, 0,0);
	//wborder(win, (int)space, (int)space, (int)space, (int)space, (int)space, (int)space, (int)space, (int)space);
	mvwprintw(win, 6, 38, "Name Project");
	refresh();
	wrefresh(win);


	//Create a window for input
	WINDOW *wininput = newwin(10, 50, (yMax/2), (xMax/2)-25);
	box(wininput, 0,0);
	refresh();
	wrefresh(wininput);

	//Create Menu Option
	keypad(wininput, true);
	string choices[3] = {"New Game", "Continue", "Exit"};
	highlight = 0;
	int choice;
	while (1) {
		for (int i = 0; i < 3; i++) {
			if (i == highlight) {
				wattron(wininput, A_REVERSE);
				mvwprintw(wininput, i+1, 1, choices[i].c_str());
				wattroff(wininput, A_REVERSE);
			}else{
				wattron(wininput, A_NORMAL);
				mvwprintw(wininput, i+1, 1, choices[i].c_str());
				wattroff(wininput, A_NORMAL);
			}//end if
		}//end for
		choice = wgetch(wininput);
		switch (choice) {
			case KEY_UP:
				highlight--;
				if (highlight == -1) {
					highlight = 0;
				}//end if
				break;
			case KEY_DOWN:
				highlight++;
				if (highlight == 3) {
					highlight = 2;
				}//end if
				break;
			default:
				break;
		}//end switch
		if (choice == 10) {
			break;
		}//end if 2
	}//end while()
	//End ncurses
}

void Run::PlayerCreate(){
	//Start ncurses
	initscr();
	cbreak();
	Character* h = new Hero();
	Character* m = new Mage();
	Character* a = new Archer();
	//get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	//Create a window for Player Create
	WINDOW *win2 = newwin(21, 75, (yMax/2)-21, (xMax/2)-10);
	box(win2, 0,0);
	refresh();
	wrefresh(win2);

	//Create a window for Choose Class
	WINDOW *win = newwin(21, 50, (yMax/2)-21, (xMax/2)-65);
	mvwprintw(win, 1,10, "CHOOSE A CLASS");
	box(win, 0,0);
	refresh();
	wrefresh(win);

	//Create Menu Option
	keypad(win, true);
	string choices[3] = {"Hero", "Mage", "Archer"};
	highlightClass = 0;
	int choice;
	while (1) {
		for (int i = 0; i < 3; i++) {
			if (i == highlightClass) {
				wattron(win, A_REVERSE);
				mvwprintw(win, i+2, 1, choices[i].c_str());
				wattroff(win, A_REVERSE);
				if (choices[i] == "Hero") {
					PrintCharacter(h);
				}else if (choices[i] == "Mage") {
					PrintCharacter(m);
				}else if(choices[i] == "Archer"){
					PrintCharacter(a);
				}//end if2
			}else{
				wattron(win, A_NORMAL);
				mvwprintw(win, i+2, 1, choices[i].c_str());
				wattroff(win, A_NORMAL);

			}//end if

		}//end for
		choice = wgetch(win);
		switch (choice) {
			case KEY_UP:
				highlightClass--;
				if (highlightClass == -1) {
					highlightClass = 0;
				}//end if
				break;
			case KEY_DOWN:
				highlightClass++;
				if (highlightClass == 3) {
					highlightClass = 2;
				}//end if
				break;
			default:
				break;
		}//end switch
		if (choice == 10) {
			break;
		}//end if 2
	}//end while()
	if (highlightClass == 0) {
		WINDOW *wininput = newwin(10, 50, (yMax/2), (xMax/2)-25);
		mvwprintw(wininput, 1,10, "CHOOSE A NAME FROM YOUR %s", h->getClass().c_str());
		mvwprintw(wininput, 3,15, "");
		box(wininput, 0,0);
		refresh();
		wrefresh(wininput);
		keypad(wininput, true);
		char str[10];
		wgetstr(wininput, str);
		Character* h = new Hero(str);
		CleanWindow();
		PlayWindow(h);
	}else if (highlightClass == 1) {
		WINDOW *wininput = newwin(10, 50, (yMax/2), (xMax/2)-25);
		mvwprintw(wininput, 1,10, "CHOOSE A NAME FROM YOUR %s", m->getClass().c_str());
		mvwprintw(wininput, 3,15, "");
		box(wininput, 0,0);
		refresh();
		keypad(wininput, true);
		char str[10];
		wgetstr(wininput, str);
		wrefresh(wininput);
		Character* m = new Mage(str);
		CleanWindow();
		PlayWindow(m);
	}else if(highlightClass == 2){
		WINDOW *wininput = newwin(10, 50, (yMax/2), (xMax/2)-25);
		mvwprintw(wininput, 1,10, "CHOOSE A NAME FROM YOUR %s", a->getClass().c_str());
		mvwprintw(wininput, 3,15, "");
		box(wininput, 0,0);
		refresh();
		wrefresh(wininput);
		keypad(wininput, true);
		char str[10];
		wgetstr(wininput, str);
		Character* a = new Archer(str);
		CleanWindow();
		PlayWindow(a);
	}//end if/else
	getch();
}

void LoadSave(){
	
}

void Run::CleanWindow(){
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	for (size_t i = 0; i < yMax; i++) {
		for (size_t j = 0; j < xMax; j++) {
			mvprintw(i, j, " ");
		}
	}
	//clear();
	//refresh();
}

void Run::Exit(){
	clear();
	refresh();
	endwin();
	exit(1);
}

void Run::PlayWindow(Character* cha){
	initscr();
	cbreak();
	noecho();

	//get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	//Create a window for Player Create
	WINDOW *winplay = newwin(30, 70, (yMax/2)-21, 10);
	box(winplay, 0,0);
	refresh();
	wrefresh(winplay);
	Player * p = new Player(winplay, 1,1, cha);
	 do{
		 p->Display();
		 wrefresh(winplay);
		 if (p->getMv() == 'm') {
			 PlayMenu(winplay, p);
		 }
	}while (p->getMv() != 'x');

	getch();

}

void Run::PlayMenu(WINDOW* winplay, Player* play){
	initscr();
	cbreak();
	noecho();

	//get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	Player * player = new Player();
	player = play;
	//Create a window for Choose Class
	WINDOW *win = newwin(15, 25, (yMax/2)-21, 90);
	mvwprintw(win, 1,7, "Menu Pause");
	box(win, 0,0);
	refresh();
	wrefresh(win);

	//Create Menu Option
	keypad(win, true);
	string choices[3] = {"Continue Game", "Save Game", "Exit to Main Menu"};
	highlightMenuPlay = 0;
	int choice;
	while (1) {
		for (int i = 0; i < 3; i++) {
			if (i == highlightMenuPlay) {
				wattron(win, A_REVERSE);
				mvwprintw(win, i+2, 1, choices[i].c_str());
				mvwprintw(win, i+2, 1, "");
				mvwprintw(win, i+2, 1, "");
				wattroff(win, A_REVERSE);
			}else{
				wattron(win, A_NORMAL);
				mvwprintw(win, i+2, 1, choices[i].c_str());
				mvwprintw(win, i+2, 1, "");
				mvwprintw(win, i+2, 1, "");
				wattroff(win, A_NORMAL);

			}//end if

		}//end for
		choice = wgetch(win);
		switch (choice) {
			case KEY_UP:
				highlightMenuPlay--;
				if (highlightMenuPlay == -1) {
					highlightMenuPlay = 0;
				}//end if
				break;
			case KEY_DOWN:
				highlightMenuPlay++;
				if (highlightMenuPlay == 3) {
					highlightMenuPlay = 2;
				}//end if
				break;
			default:
				break;
		}//end switch
		if (choice == 10) {
			break;
		}//end if 2
	}//end while()
	if (highlightMenuPlay == 0) {
		wclear(win);
		refresh();
		wrefresh(win);
	} else if (highlightMenuPlay == 1) {
		ofstream savefile("savefile.txt");
		savefile << *player;

		//Create a window for Choose Class
		WINDOW *wininput = newwin(3, 10, (yMax/2)-15, (xMax/2)-15);
		mvwprintw(wininput, 1,1, "Success!");
		box(wininput, 0,0);
		refresh();
		wrefresh(wininput);

		wclear(wininput);
		wclear(win);
		refresh();
		wrefresh(win);
		wrefresh(wininput);

	} else if (highlightMenuPlay == 2) {
		wclear(winplay);
		refresh();
		wrefresh(winplay);
		CleanWindow();
		MenuWindow();
	}//end if/else
	getch();
}

void Run::PrintCharacter(Character* cha){
	//Start ncurses
	initscr();
	cbreak();
	Character* ch = cha;

	//get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	//Create a window for Player Create
	WINDOW *win2 = newwin(21, 75, (yMax/2)-21, (xMax/2)-10);
	box(win2, 0,0);
	refresh();
	wrefresh(win2);
	/*
	int cont = 2;
	for(int i=0; i <= 8; i++){
			mvwprintw(win2, cont, 40, "%s", ch->getSprite().at(i));
			cont++;
	}
	*/
	mvwprintw(win2, 1, 5, "HP: %d", ch->getHP());
	mvwprintw(win2, 2, 5, "");
	mvwprintw(win2, 3, 5, "Level: %d", ch->getLevel());
	mvwprintw(win2, 4, 5, "");
	mvwprintw(win2, 5, 5, "Experience: %d", ch->getExperience());
	mvwprintw(win2, 6, 5, "");
	mvwprintw(win2, 7, 5, "Strength: %d", ch->getStrength());
	mvwprintw(win2, 8, 5, "");
	mvwprintw(win2, 9, 5, "Magic: %d", ch->getMagic());
	mvwprintw(win2, 10, 5, "");
	mvwprintw(win2, 11, 5, "Skill: %d", ch->getSkill());
	mvwprintw(win2, 12, 5, "");
	mvwprintw(win2, 13, 5, "Speed: %d", ch->getSpeed());
	mvwprintw(win2, 14, 5, "");
	mvwprintw(win2, 15, 5, "Luck: %d", ch->getLuck());
	mvwprintw(win2, 16, 5, "");
	mvwprintw(win2, 17, 5, "Defense: %d", ch->getDefense());
	mvwprintw(win2, 18, 5, "");
	mvwprintw(win2, 19, 5, "Resistance: %d", ch->getResistance());
	refresh();
	wrefresh(win2);
}

Run::~Run(){

}
