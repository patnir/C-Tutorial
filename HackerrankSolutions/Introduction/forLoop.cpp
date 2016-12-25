#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const char *(array[]) = {"one\0", "two\0", "three\0", "four\0", "five\0", "six\0", "seven\0", "eight\0", "nine\0"};
    int start, end;
    cin >> start;
    cin >> end;
    for (int i = start; i <= end; i++){
        if (i > 9) {
            if (i % 2 == 0) {
                cout << "even";
            }
            else {
                cout << "odd";
            }
        }
        else {
            cout << array[i - 1];
        }
        cout << "\n";
    }    
    return 0;
}
