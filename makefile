main: main.o Character.o Hero.o Mage.o Archer.o Weapon.o Player.o Run.o
	g++ Character.o Hero.o Mage.o Archer.o Weapon.o Player.o Run.o main.o -lncurses -o main

main.o: main.cpp Character.h Hero.h Mage.h Archer.h Weapon.h Player.o Run.h
	g++ -c main.cpp

Character.o: Character.h Character.cpp
	g++ -c Character.cpp

Hero.o: Hero.h Hero.cpp
	g++ -c Hero.cpp

Mage.o: Mage.h Mage.cpp
	g++ -c Mage.cpp

Archer.o: Archer.h Archer.cpp
	g++ -c Archer.cpp

Weapon.o: Weapon.h Weapon.cpp
	g++ -c Weapon.cpp

Player.o: Player.h Player.cpp
	g++ -c Player.cpp

Run.o: Run.h Run.cpp
	g++ -c Run.cpp

clean:
	rm *.o main
