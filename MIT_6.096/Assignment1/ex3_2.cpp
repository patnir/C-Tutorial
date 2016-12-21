#include <iostream>

using namespace std;

void inputStuff() {
	int n;
	cout << "Enter though: ";
	cin >> n;
	int array[n];
	for (int i =0; i < n; i++) {
		cin >> array[i];
	}
	int min = array[0];
	int max = array[0];
	double mean;
	for (int i = 0; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
		}
		if (array[i] < min) {
			min = array[i];
		}
		mean += array[i];
	}

	cout << "Mean: " << mean / n << "\n";
	cout << "Max: " << max << "\n";
	cout << "Min: " << min << "\n";
	cout << "Range: " << max - min << "\n";
}

int main() {
	inputStuff();
	return 0;

}
