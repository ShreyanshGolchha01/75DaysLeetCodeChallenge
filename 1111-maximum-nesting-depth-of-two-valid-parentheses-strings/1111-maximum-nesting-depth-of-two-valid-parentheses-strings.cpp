class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.length());
        int d = 0;
        for(int i = 0;i<seq.length();i++)
        {
            if(seq[i]=='(')
            {
                ++d;
                ans[i] = d % 2;
            }
            else
            {
                ans[i] = d % 2;
                --d;
            }
        }
        return ans;
    }
};