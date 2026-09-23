class Solution {
public:
    int secondHighest(string s) {
        int se = INT_MIN;
        int f = INT_MIN;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z') continue;
            int num = s[i] - '0';
            if(num>f)
            {
                se = f;
                f = num;
            }
            else if(num>se && num<f)
            {
                se = num;
            }
        }
        return se!=INT_MIN?se:-1;
    }
};