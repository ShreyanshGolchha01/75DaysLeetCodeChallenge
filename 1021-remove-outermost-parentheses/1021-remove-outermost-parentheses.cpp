class Solution {
public:
    string removeOuterParentheses(string s) {
        string r = "";
        int c = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(c>0) r+=s[i];
                c++; 
            }
            else
            {
                c--;
                if(c>0) r+=s[i];
            }
        }
        return r;
    }
};