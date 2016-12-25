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

class Polygon
{
protected:
	static int numberOfPolygons;
	PointArray vertices;
public:
	Polygon(const PointArray &pts);
	Polygon(const Point pts[], int length);
	~Polygon();	

	virtual double area() const = 0;
	static int getNumPolygons() { return numberOfPolygons; }
	int getNumSides() const {return vertices.getSize(); }
	const PointArray *getPoints() const { return &vertices; }

};