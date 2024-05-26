#include <iostream>
#include <string>
#include "Point.cpp "
namespace figures {
	using namespace std;
	class Line {
	private:
		Point x;
		Point y;
	protected:
     
	public:
		Line(Point a, Point b);
		Line(Line& other);
		void flip();
		void move(int x, int y);
		string toString();

	};
}