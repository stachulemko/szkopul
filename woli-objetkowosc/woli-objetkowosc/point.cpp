#include "point.h"
#include<iostream>
#include <string>
//using namspace WOLI - Fig;
namespace figury {
	using namespace std;
	class Point {
	private:
		int x;
		int y;

	protected:
	public:
		Point(int x, int y);
		Point(Point& other);
		void Point(int x,int y)
		void flip();
		void move(int x, int y);
		string toString();


	};
}
