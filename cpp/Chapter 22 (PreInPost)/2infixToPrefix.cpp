#include <iostream>
#include <string>
#include <stack>
using namespace std;

// Function to return precedence of operators
int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0; // For any other character (not expected here)
}

// Function to combine two values and an operator into a prefix expression
string solve(string val1, string val2, char ch) {
    string s = "";
    s.push_back(ch); // Add the operator at the beginning
    s += val1;       // Add the first operand
    s += val2;       // Add the second operand
    return s;
}

int main() {
    string s = "2+6*4/8-3"; // Infix expression
    stack<string> val;      // Stack to store operands
    stack<char> op;         // Stack to store operators

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) { // If the character is a digit
            val.push(string(1, s[i])); // Convert to string and push
        } else { // If the character is an operator
            // Resolve higher or equal precedence operators
            while (!op.empty() && prio(op.top()) >= prio(s[i])) {
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string ans = solve(val1, val2, ch);
                val.push(ans);
            }
            // Push the current operator to the stack
            op.push(s[i]);
        }
    }

    // Process remaining operators in the stack
    while (!op.empty()) {
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    // Output the final result (prefix expression)
    cout << val.top() << endl;

    return 0;
}
