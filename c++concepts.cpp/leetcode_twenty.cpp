#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if(st.empty()) return false;
                char top = st.top();
                if((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution solver;
    string test1 = "()[]{}";
    cout << "Test 1 (\"" << test1 << "\"): " << (solver.isValid(test1) ? "Valid" : "Invalid") << endl;
    string test2 = "(]";
    cout << "Test 2 (\"" << test2 << "\"): " << (solver.isValid(test2) ? "Valid" : "Invalid") << endl;
    string test3 = "({[]})";
    cout << "Test 3 (\"" << test3 << "\"): " << (solver.isValid(test3) ? "Valid" : "Invalid") << endl;

    return 0;
}
