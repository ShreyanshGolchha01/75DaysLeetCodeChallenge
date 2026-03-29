class Solution {
public:
    bool isValid(string s) {
        // Usually empty string is considered valid
        if (s.empty()) return true;

        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                // c is a closing bracket: first ensure stack is not empty
                if (stk.empty()) return false;
                char last = stk.top();
                stk.pop();

                bool match = (c == ')' && last == '(')
                          || (c == ']' && last == '[')
                          || (c == '}' && last == '{');

                if (!match) return false;
            }
        }
        // valid only if no unmatched opening brackets remain
        return stk.empty();
    }
};
