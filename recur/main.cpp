#include <iostream>
#include <string>
#include <set>
using namespace std;

string insertAtPos(string s, char c, int indx) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i == indx) {
            ans += c;  // Insert character `c` at position `indx`
        }
        ans += s[i];
    }
    
    if (indx == s.size()) {  // If index is at the end, append `c`
        ans += c;
    }
    
    return ans;
}

int main() {
    string x = "";
    string s1 = insertAtPos(x, '(', 0);  
    s1 = insertAtPos(s1, ')', 1);  // Update the index to correctly insert ')'

    string y = "";
    y = insertAtPos(y, '(', 0);  
    y = insertAtPos(y, ')', 1);  // Correctly insert ')' at index 1

    set<string> f;
    f.insert(s1);
    f.insert(y);
    
    cout << f.size();
    return 0;
}