#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#define LENGTH 4

void inputArray(int *a) {
	cout << "Enter " << LENGTH << " numbers:\n";
	for (int i = 0; i < LENGTH; i++) {
		cin >> a[i];
	}
}

void printingArray(int *a) {
	cout << "print array: ";
	for (int i = 0; i < LENGTH; i++)
		cout << a[i] << " ";
	cout << "\n";
	return;
}

void characterManipulation() {
	char mString[] = "asdlkfjaf09.SDva.sda";
	char current = mString[0];
	for (int i = 0; current != '\0'; current = mString[++i]) {
		if (isalpha(current))
			cout << (char)(isupper(current)? tolower(current) : current);
		else if (ispunct(current))
			cout << " ";
	}
	cout << endl;
}

void stringManipulation() {
	char fragment1[] = "I'm a s";
	char fragment2[] = "string!";
	char fragment3[20];
	char finalstring[20] = "";

	strcpy(fragment3, fragment1);
	strcat(finalstring, fragment3);
	strcat(finalstring, fragment2);

	cout << finalstring;

}


int main() {
	int a[LENGTH];
	inputArray(a);
	printingArray(a);
	characterManipulation();
	stringManipulation();
	return 0;
}
