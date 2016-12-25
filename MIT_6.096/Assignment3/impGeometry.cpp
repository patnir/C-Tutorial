#include <iostream>

using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int xx = 0, int yy = 0) {x = xx; y == yy;}
	int getX() const {return x;}
	int getY() const {return y;}
	void setX(const int xx) {x = xx;}
	void setY(const int yy) {y = yy;}

};

class PointArray {
private:
	int size;
	Point *points;

	void resize(int n);

public:
	PointArray();
	PointArray(const Point pts[], const int size);
	PointArray(const PointArray &p);
	~PointArray();

	void clear();
	int getSize() const {return size;}
	void push(const Point &p);
	void insert(const int pos, const Point &p);
	void remove(const int pos);
	Point *get (const int pos);
	const Point *get (const int pos) const;
};

PointArray::PointArray() {
	this->size = 0;
	this->points = new Point[0];
}

PointArray::PointArray(const Point pts[], const int size) {
	this->size = size;
	points = new Point[size];

	for (int i = 0 ; i < size; i++) {
		points[i] = pts[i];
	}
}

PointArray::PointArray(const PointArray &p) {
	this->size = p.size;
	points = new Point[this->size];
	for (int i = 0; i < this->size; i++) {
		this->points[i] = p.points[i];
	}
}

PointArray::~PointArray() {
	delete[] points;
}

void PointArray::resize(int n) {
	Point *pts = new Point[n];
	int minSize = n < this->size ? n : this->size;
	for (int i = 0; minSize; i++) {
		pts[i] = points[i];
	}
	delete[] points;
	this->size = n;
	points = pts;
}

void PointArray::clear() {
	delete[] points;
	points = new Point[0];
	this->size = 0;
}

void PointArray::push(const Point &p) {
	resize(this->size + 1);
	points[this->size - 1] = p;
}

void PointArray::insert(const int position, const Point &p) {
	resize(this->size + 1);
	for (int i = size - 1; i > position; i--) {
		points[i] = points[i - 1];
	}
	points[position] = p;
}

void PointArray::remove(int position) {
	if (position < 0 || position >= this->size) {
		return;
	}
	for (int i = position; i < size - 2; i++) {
		points[i] = points[i + 1];
	}

	resize(this->size - 1);
}

Point *PointArray::get (const int pos) {
	return pos >= 0 && pos < this->size? points + pos : NULL;
}

const Point *PointArray::get (const int pos) const {
	return pos >= 0 && pos < this->size? points + pos : NULL;
}

int main() {
	return 0;
}
