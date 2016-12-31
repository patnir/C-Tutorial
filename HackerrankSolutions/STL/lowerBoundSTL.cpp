#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void binarySearchLocation(int *v, int size, int target) {
    
}

void printLocation(int *v, int size, int target) {
    int i;
    for (i = 0; i < size && v[i] <= target; i++) {
        if (v[i] == target) {
            cout << "Yes " << i + 1 << "\n";
            return;
        }
    }
    cout << "No " << i + 1 << "\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int *v =  new int[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a; 
        cin >> a;
        printLocation(v, n, a);
    }
    delete[] v;
    return 0;
}
