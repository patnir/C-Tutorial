#include <iostream>

using namespace std;

class Point {
public:
	double x, y;

	Point() {
		x = 0.0;
		y = 0.0;
		cout << "Point instance created\n";
	}

	Point(double nx, double ny) {
		x = nx;
		y = ny;
		cout << "Point instance created\n";
	}

	void offset(double X, double Y) {
		x += X;
		y += Y;
	}

	void print() {
		cout << "(" << x << ", " << y << ")\n";
	}
};

class Vector {
public:
	Point start;
	Point end;

	Vector() {
		cout << "Vector instance created\n";
	}

	Vector(double sx, double sy, double ex, double ey) {
		start.x = sx;
		start.y = sy;
		end.x = ex;
		end.y = ey;
		cout << "Vector instance created\n";
	}

	void offset(double x, double y) {
		start.offset(x, y);
		end.offset(x, y);
	}

	void print();
};

void Vector::print() {
		cout << "start: ";
		start.print();
		cout << "end: ";
		end.print();
}

int main() {
	Point p;
	p.x = 1.5;
	p.y = 4.0;
	p.print();
	p.offset(4.0, 4.0);
	p.print();

	Vector v;
	v.start.x = 1.5;
	v.end.x = 2.4;
	v.start.y = 3;
	v.end.y = 4;
	v.offset(5, 6);
	v.print();

	Vector vN(1,2,3,4);
	vN.print();
	return 0;
}