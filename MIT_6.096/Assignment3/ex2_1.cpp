#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int u, int v) {
		x = u;
		y = v;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	void doubleValue() {
		x *= 2;
		y *= 2;
	}
};

int main() {
	Point m(5, 2);
	m.doubleValue();
	cout << m.getX() << " " << m.getY() << "\n";
	return 0;
}