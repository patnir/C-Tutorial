#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void printLocation(vector <int> v, int target) {
    int i;
    for (i = 0; i < v.size() && v[i] <= target; i++) {
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
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a; 
        cin >> a;
        printLocation(v, a);
    }
    return 0;
}
