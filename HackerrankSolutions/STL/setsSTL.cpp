#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int a;
        int b;
        cin >> a >> b;
        if (a == 1) {
            s.insert(b);
        }
        else if (a == 2) {
            s.erase(b);
        }
        else {
            set<int>::iterator itr=s.find(b);
            if (itr == s.end()) {
                cout << "No" << "\n";
            }
            else {
                cout << "Yes" << "\n";
            }
        }
    }
    return 0;
}
