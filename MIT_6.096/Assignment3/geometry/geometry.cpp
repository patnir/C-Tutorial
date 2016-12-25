#include <iostream>

using namespace std;

#include "geometry.h"

#include "points.h"

Point shape[4];

Point *updateShape(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0, 0)) {
	shape[0] = p1;
	shape[1] = p2;
	shape[2] = p3;
	shape[3] = p4;

	return shape;
}

int main() {
	return 0;
}