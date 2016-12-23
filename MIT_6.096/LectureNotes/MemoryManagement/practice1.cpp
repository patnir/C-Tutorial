#include <iostream>

using namespace std;

class Integer {
public:
	int val;
	Integer(int val = 0) {
		this->val = val;
 	}
};

class Point {
public:
	int x, y;

	Point() {
		cout << "constructor\n";
	}
	~Point() {
		cout  << "destructor\n";
	}
	void print();
};

void Point::print() {
	cout << "(" << this->x << ", " << this->y << ")\n";
}

int main() {
 	Integer i; // ok
 	Integer j(3); // ok


 	int *x = new int;

 	delete x;

 	Point *p = new Point();

 	p->x = 5;
 	p->y = 5;
 	p->print();
 	delete p;
 	return 0;
}
