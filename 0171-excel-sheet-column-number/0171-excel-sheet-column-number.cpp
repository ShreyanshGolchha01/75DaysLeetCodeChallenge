class Solution {
public:
    int titleToNumber(string c) {
        int ans = 0;
        for(char ch: c)
        {
            int d = (ch - 'A') + 1;
            ans = ans * 26 + d;
        }
        return ans;
    }
};