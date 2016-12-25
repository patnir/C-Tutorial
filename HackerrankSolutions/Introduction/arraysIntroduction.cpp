#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int i;
    int array[n];
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (i = n - 1; i > -1; i--) {
        cout << array[i] << " ";
    }
    return 0;
}
