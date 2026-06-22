class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count = 0;
        unordered_map<char,int> mp;
        for(char x:text)
        {
            mp[x]++;
        }
        bool value = true;
        int i = 1;
        while(value)
        {
            if(mp['b']>=i && mp['a']>=i && mp['l']>=2*i && mp['o']>=2*i && mp['n']>=i)
            {
                count++;
                i++;
            }
            else break;
        }
        return count;
    }
};