#include <iostream>

using namespace std;

#include "geometry.h"

#include "points.h"

int Polygon::numberOfPolygons = 0;

Polygon::Polygon(const PointArray &pts) : vertices(pts) {
	++numberOfPolygons;
}

Polygon::Polygon(const Point pts[], const int length) : vertices(pts, length) {
	++numberOfPolygons;
}

Polygon::~Polygon() {
	--numberOfPolygons;
}

class Rectangle : Polygon {
public:
	Rectangle(const Point &a, const Point &b);
	Rectangle(const int a, const int b, const int c, const int d);
	virtual double area() const;
};


int main() {
	return 0;
}