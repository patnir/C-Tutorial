#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void binarySearchLocation(int *v, int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while (start <= end) {
        mid = (start + end) / 2;
        if (target == v[mid]) {
            int curr = mid;
            while (v[curr] == target && curr >= 0) {
                curr --;
            }
            cout << "Yes " << curr + 2 << "\n";
            return ;
        }
        else if (target >= v[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    while (v[mid] < target && mid < size) {
        mid ++;
    }
    cout << "No " << mid + 1 << "\n"; 
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
        binarySearchLocation(v, n, a);
    }
    delete[] v;
    return 0;
}
