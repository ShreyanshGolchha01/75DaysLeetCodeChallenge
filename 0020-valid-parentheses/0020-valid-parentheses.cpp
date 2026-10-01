class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
        stack<char> st;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                char last = st.top();
                st.pop();
                bool m = (s[i] == ')' && last == '(' || s[i] == ']' && last == '[' || s[i] == '}' && last == '{');
                if(!m) return false;
            }
        }
        return st.empty();
    }
};