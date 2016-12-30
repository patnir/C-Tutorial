#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define NF "Not Found!\n";

void parseLine(string s) {
    cout << "Parsing line " << s << "\n";
}

void parseQuery() {
    
}

int main() {
    int n, q;
    cin >> n >> q ;
    vector <string> lines;
    for (int i = 0; i <= n; i++) {
        string s;
        getline(cin, s);
        if (i != 0)
            lines.push_back(s);
    }
    
    vector<string> queries;
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        queries.push_back(s);
    }
    return 0;
}
