#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

	void printPoint() {
		cout << "(" << this->getX() << ", " << this->getY() << ")\n";
	}
};

class PointArray {
private:
	Point *p;
	int size;

	void resize(int n);

public:
	PointArray() {
		size = 0;
		p = new Point[0];
	}
	PointArray(const Point points[], const int size) {
		this->size = size;
		p = new Point[size];
		for (int i = 0; i < size; i++) {
			p[i] = points[i];
		}
	}
	PointArray(const PointArray& pv) {
		this->size = pv.size;
		p = new Point[this->size];
		for (int i = 0; i < size; i++) {
			p[i] = pv.p[i];
		}
	}
	~PointArray() {
		delete[] p;
	}


	void pushBack(const Point &p);

	void printArray();

	int getSize() {
		return this->size;
	}

	void insert(const int position, const Point &p);

	void clear();

	Point *get(const int position);
	const Point *get(const int position) const;
};

Point *PointArray::get(const int position) {
	if (position >= this->size) {
		return NULL;
	}
	return p + position;
}

const Point *PointArray::get(const int position) const {
	return position >= this->size ? NULL : p + position;
}


void PointArray::clear() {
	delete[] p;
	p = new Point[0];
	this->size = 0;
}



void PointArray::insert(const int position, const Point &p) {
	if (position > this->size) {
		return;
	}
	this->resize(this->size +1);
	Point temp = this->p[position];
	this->p[position] = p;
	int index = position + 1;
	Point curr = this->p[index];
	while (index != this->size - 1) {
		this->p[index] = temp;
		temp = curr;
		index += 1;
		curr = this->p[index];
	}
	this->p[this->size - 1] = temp;
}

void PointArray::printArray() {
	cout << this->size << ": ";

	for (int i = 0; i < this->size; i++) {
		(this->p[i]).printPoint();
	}

	cout << "\n";
}

void PointArray::pushBack(const Point &p) {
	this->resize(this->size + 1);

	this->p[this->size - 1] = p;
	return;
}


void PointArray::resize(int n) {
	Point *nP = new Point[n];
	for (int i = 0; i < n && i < size; i++) {
		nP[i] = this->p[i];
	}

	delete[] p;

	p = nP;

	this->size = n;
}

int Point::getX() {
	return this->x;
}

int Point::getY() {
	return this->y;
}

void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

int main() {
	return 0;
}
