#include <iostream>
#include <string>
#include "Point.cpp "
#include "Triangle.cpp "
#include "Line.cpp "
#include "Quadrilateral.cpp "

namespace figures {
	using namespace std;
	class Group {
	private:
		vector<lines>line;
		vector<Triangle>triangless;
		vector< Quadrilateral>quadrilateral
	protected:

	public:
		Group();
		Line(Point a, Point b);
		Line(Line& other);
		void flip();
		void move(int x, int y);
		string toString();

	};
}