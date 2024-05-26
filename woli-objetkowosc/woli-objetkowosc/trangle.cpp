#include <iostream>
#include <string>
#include "Point.cpp "
namespace figures {
	using namespace std;
	class Triangle {
	private:
		Point a;
		Point b;
		Point c;
	protected:

	public:
		Triangle(Point a, Point b);
		Triangle(Triangle& other);
		void flip();
		void move(int x, int y);
		int getSurface();
		string toString();

	};
}
