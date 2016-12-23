#include <iostream>

using namespace std;

int raiseToPower(int down, int up) {
	if (up < 0) {
		cout << "up needs to be greater than 1";
		return -1;
	}
	int result = 1;
	for (int i = 0; i < up; i++) {
		result *= down;
	}
	return result;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	cout << "3^4 is " << raiseToPower(3, 4) << "\n";
	int x = 0;
	int y = 7;
	cout << "before swap " << x << " " << y << "\n";

	swap(x, y);	
	cout << "before swap " << x << " " << y << "\n";
	return 0;
}
