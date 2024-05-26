#include <iostream>
#include <string>
#include "Point.cpp "
namespace figures {
	using namespace std;
	class Quadrilateral {
	private:
		Point a;
		Point b;
		Point c;
		Point d;
	protected:

	public:
		Quadrilateral(Point a, Point b, Point c, Point d);
		Quadrilateral(Quadrilateral& other);
		void flip();
		void move(int x, int y);
		int getSurface();
		string toString();

	};
}
