#include <iostream>

#include <cmath>

using namespace std;

int checkPrime(int n) {
	int limit = (int) sqrt(n);
	for (int i = 2; i <= limit; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

void printPrimes(int n) {
	for (int i = 2; i < n; i++) {
		if (checkPrime(i) == 1)
			cout << i << " ";
	}
	cout << "\n";
	return;
}

int main() {
	cout << "Enter number: ";
	int n;
	cin >> n;
	printPrimes(n);
	return 0;
}
