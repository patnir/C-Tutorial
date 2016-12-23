#include <iostream>
using namespace std;

class Student {
public:
	char *name;
	int age;
};

class Point {
public:
	double x;
	double y;
};

class Vector {
public:
	Point start, end;

	void offset(double x, double y) {
		start.x += x;
		start.y += y;
		end.x += x;
		end.y += y;
	}

	void print() {
		cout << "start: (" << start.x << ", " << end.y << ")\n";
		cout << "end: (" << end.x << ", " << end.y << ")\n";
	}
};



int main() {
	Student s1;
	s1.name = "Rahul";
	s1.age = 21;
	cout << s1.name << "\n" << s1.age;

	Vector v;
	v.start.x = 10;
	v.start.y = 20;
	v.end.x = 2;
	v.end.y = 6;

	Vector v2;
	v2.start = v.start;
	return 0;
}