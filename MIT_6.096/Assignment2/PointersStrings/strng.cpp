#include <iostream>

using namespace std;

int sLength(char *s) {
	int total = 0;
	for (char curr = s[total]; curr != '\0'; curr = s[++total]) {}
	
	return total;
}

int main() {
	char s[20] = "Rahul";
	cout << "length is " << sLength(s);
}
