#include <iostream>

using namespace std;

int main() {
	int x = 6, y = 2;
	if (x > y)
		cout << "x is greater than y\n";
	else if (x < y)
		cout << "x is lesser than y\n";
	else 
		cout << "x is eqaul to y\n";

	switch(x) {

		case 1: 
			cout << "x is 1\n";
			break;
		case 2:
		case 3:
			cout << "x is 2 or 3";
			break;
		default: 
			cout << "x is not 1, 2, or 3\n";
	}

	while (x < 10) {
		x = x + 1;
	}
	cout << "x is " << x << "\n";

	for (int j = 0; j < 10; j++) {
		cout << "j is " << j << "\n";
	}

	for (int k = 0; k < 4; k = k +1){
		for (int b = 0; b < 4; b++)
			cout << b;
		cout << "\n";
	}
	return 0;
}
