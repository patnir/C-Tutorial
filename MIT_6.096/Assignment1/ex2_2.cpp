#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number: ";
	int n;
	cin >> n;
	const char * hw = "Hello, World!\n";
	cout << "for loop:\n";
	for (int i = 0; i < n; i++)
		cout << hw;
	int i = 0;
	cout << "while loop:\n";
	while (i++ < n) 
		cout << hw;
	i = 1;
	cout << "do while\n";
	do {
		cout << hw;
	} while(i++ < n);
	return 0;
}
