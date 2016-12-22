#include <iostream>

using namespace std;

int sum(int a, int b) {
	cout << "first function\n";
	return a + b;
}

double sum(double a, double b) {
	cout << "first double function\n";
	return a + b;
}

int sum(int a, int b, int c = 0, int d = 0) {
	cout << "second function\n";
	return a + b + c + d;
}

int sum(int *a, int length) {
	int result = 0;
	for (int i = 0; i < length; i++) {
		result += a[i];
	}
	return result;
}

int rSum(int *a, int length) {
	if (length == 0) {
		return 0;
	}
	return a[length - 1] + rSum(a, length - 1);
}

int main() {
	int a[6] = {1, 2, 4, 5, 6, 7};
	int result = sum(a, 6); 
	cout << result << "\n";
	cout << rSum(a, 6) << "\n";
	return 0;
}
