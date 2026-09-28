class Solution {
public:
    int maxDepth(string s) {
        int op = 0;
        int maxi = 0;
        stack<char> st;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                op++;
                maxi = max(maxi,op);
            }
            else if(s[i]==')')
            {
                st.pop();
                op--;
                // maxi = max(maxi,op);
            }
        }
        return maxi;
    }
};