#include <iostream>

using namespace std;

void gFactorial() {
	unsigned int number ;
	cout << " Enter a number : ";
	cin >> number ;
	if (number < 0) {
		cout << "Number cannot be negative\n";
		return;
	}
	cout << "The factorial of " << number << " is ";
	unsigned int accumulator = 1;
	for (; number > 0; accumulator *= number --);
	cout << accumulator << ".\n";
}

int main() {
	gFactorial();
	return 0;
}
