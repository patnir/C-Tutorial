#include <iostream>

const int LENGTH = 10;

int main() {
	int a[LENGTH] = {10};
	int *x = a;
	int *y = a + LENGTH - 1;
	std::cout << *x << " " << *y;
	return 0;
}
