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

vector <string> getAttributes(string line) {
    vector <string> att;
    int i = 1;
    while (line[i + 1] != '>') {
        string curr;
        int loc = i;
        if (line[i] == ' ' && line[i + 1] != '\"' && line[i + 1] != '=') {
            loc = i + 1;
            while (line[loc] != ' ')
                curr.push_back(line[i]);
            att.push_back(curr);
            cout << curr;
        }
        
        i = loc + 1;
    }
    return att;
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

string removeTag(string line) {
    int loc;
    for (loc = line.size() - 1; loc >= 0 && line[loc] != '.'; loc--) {
    }
    //cout << loc;
    string n;
    for (int i = 0; i < loc; i++) {
        n.push_back(line[i]);
    }
    
    //cout << n;
    
    return n;
}

vector<string> buildCombinations(vector <string> lines, vector <string> &values) {
    vector<string> combos;
    string curr;
    int total = lines.size();
    for (int i = 0; i < total; i++) {
        if (lines[i][1] != '/') {
            string tag = getTag(lines[i]);
            string att = getAttribute(lines[i]);
            vector <string> attributes = getAttributes(lines[i]);
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
            
            //cout << tag << " " <<  att << " " << val << " "  << combo << "\n";
        }
        else {
            //cout << "removing " << curr << "\n";
            curr = removeTag(curr);
        }
    }
    return combos;
}

void checkQuery(string s, vector <string> values, vector <string> combos) {
    for (int i = 0; i < values.size(); i++) {
        int val = s.compare(combos[i]);
        //cout << "compare " << val << "\n";
        if (val == 0) {
            cout << values[i] << "\n";
            return;
        }
    }
    cout << NF;
}

void parseQuery(int q, vector <string> values, vector <string> combos) {
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        //cout << values.size() << "\n";
        checkQuery(s, values, combos);
    }
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
    
    parseQuery(q, values, combos);
   
    return 0;
}