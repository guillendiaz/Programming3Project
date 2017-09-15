#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate{
	private:
		int X, Y;

	public:
		Coordinate();
		Coordinate(int, int);

		void setX(int);
		int getX();
		void setY(int);
		int getY();
		~Coordinate();
	
};

#endif