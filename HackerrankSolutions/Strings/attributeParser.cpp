#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define NF "Not Found!\n";

string getValue(string line) {
    string val;
    for (int i = 0; i < line.size() && val.size() == 0; i++) {
        if (line[i] == '\"') {
            int j = i + 1;
            while (line[j] != '\"') {
               val.push_back(line[j]);
               j++;
            }
            return val;
        }
    }
    return val;
}


string getTag(string line) {
    string tag;
    for (int i = 1; i < line.size() && line[i] != ' '; i++) {
        tag.push_back(line[i]);
    }
    return tag;
}

string getAttribute(string line) {
    string att;
    for (int i = 0; i < line.size() && att.size() == 0; i++) {
        if (line[i] == ' ') {
            int j = i + 1;
            while (line[j] != ' ') {
               att.push_back(line[j]);
               j++;
            }
            return att;
        }
    }
    return att;
}


vector<string> buildCombinations(vector<string> lines, vector<string> values) {
    vector<string> combos;
    string curr;
    int total = lines.size();
    for (int i = 0; i < total; i++) {
        if (lines[i][1] != '/') {
            string tag = getTag(lines[i]);
            string att = getAttribute(lines[i]);
            string val = getValue(lines[i]);

            if (curr.size() == 0) {
                curr.append(tag);
            }
            else {
                curr.append(".");
                curr.append(tag);
            }
            string combo = curr;
            combo.append("~");
            combo.append(att);
            values.push_back(val);
            combos.push_back(combo);
            
            cout << tag << " " <<  att << " " << val << " "  << combo << "\n";
        }
        else {
            
        }
    }
    return combos;
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
    
    vector<string> values;
    vector<string> combos = buildCombinations(lines, values);
    
    vector<string> queries;
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        queries.push_back(s);
    }
    return 0;
}
