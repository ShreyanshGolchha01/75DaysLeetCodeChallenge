class Solution {
public:
    void gen(int o,int c,vector<string> &r,string s)
    {
        if(o == 0 && c == 0)
        {
            r.push_back(s);
            return;
        }
        if(o>0) gen(o - 1,c,r,s+'(');
        if(c>0 && c>o) gen(o,c-1,r,s+')'); 
    }
    vector<string> generateParenthesis(int n) {
        vector<string> r;
        gen(n,n,r,"");
        return r;
    }
};