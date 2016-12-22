#include <iostream>

using namespace std;

#include <cstdlib>
#include <ctime>


int LENGTH, WIDTH;

void printArray(int *a, int length) {
	for (int i = 0; i < length - 1; i++) {
		cout << a[i] << ", ";
	}
	cout << a[length - 1] << "\n";
}

void reverse(int *a, int length) {
	for (int i = 0; i < length / 2; i++ ) {
		int temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
	}
}

void pReverse(int *a, int length) {
	for (int i = 0; i < length / 2; i++) {
		int temp = *(a + i);
		*(a + i) = *(a + length - i - 1);
		*(a + length - i - 1) = temp;
	}
}

void transpose ( const int input [][ LENGTH ], int output [][ WIDTH ]) {
	for (int i = 0; i < LENGTH; i++) {
		for (int j = 0; i < WIDTH; j++) {
			input[i][j] = output[j][i];			
		}
	}
}

void initializeMat(int mat[][LENGTH]) {
	srand(time(0));
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < LENGTH; j++) {
			mat[i][j] = rand() % 100;
		}
	}
}

void printMat(int mat[][LENGTH]) {
	for(int i = 0; i < WIDTH; i++) {
		printArray(mat[i], LENGTH);
	}
}

int main() {
	cout << "Enter length: ";
	cin >> LENGTH;
	cout << "Enter width: ";
	cin >> WIDTH;
	int input[WIDTH][LENGTH];
	int output[LENGTH][WIDTH];
	initializeMat(input);
	printMat(input);
//	transpose(input, output);
	return 0;
}
