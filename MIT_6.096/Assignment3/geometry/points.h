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