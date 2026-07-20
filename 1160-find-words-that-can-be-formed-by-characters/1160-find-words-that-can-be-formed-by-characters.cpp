class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(char s:chars)
        {
            mp[s]++;
        }
        for(int i = 0;i<words.size();i++)
        {
            int temp = 0;
            for(char c: words[i])
            {
                if(mp[c]==0) break;
                else
                {
                    temp++;
                    mp[c]--;
                }
            }
            if(temp==words[i].size()) ans+=temp;
            for(char c:chars)
            {
                mp[c] = 0;
            }
            for(char s:chars)
            {
                mp[s]++;
            }
        }
        return ans;
    }
};