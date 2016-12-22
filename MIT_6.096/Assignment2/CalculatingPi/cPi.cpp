#include <iostream>

using namespace std;

#include <cstdlib>
#include <ctime>
#include <cmath>

void generateRandomNumber(double *x, double *y) {
	*x = (rand() % (10000 - 1000 + 1) + 1000) / 10000.000;
	*y = (rand() % (10000 - 1000 + 1) + 1000) / 10000.000;
	*x = (rand() % (10000 - 1000 + 1) + 1000) / 10000.000;
	return;
}

void simulateThrows(int n) {
	double x, y;
	int hit = n;	
	srand(time(0));
	for (int i = 0; i < n; i++) {
		generateRandomNumber(&x, &y);
		//cout << "The random numbers are: " << x << " and " << y << "\n";
		double distance = sqrt(pow(x, 2) + pow(y, 2));
		//cout << "The distance is " << distance << "\n";
		if (distance > 1.000) {
			hit--;
		}
	}
	double pi = 4.00 * hit / n; 
	cout << "pi: " << pi << "\n";

}

int main() {
	cout << "Enter number of throws: ";
	int n;
	cin >> n;
	simulateThrows(n);
	return 0;
}
