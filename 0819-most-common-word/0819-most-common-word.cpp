class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        unordered_map<string,int> mp;
        vector<string> w;
        int l = 0;
        while(l<p.size())
        {
            string temp;
            while(l<p.size() && !isalpha(p[l])) l++;
            while(l<p.size() && isalpha(p[l]))
            {
                temp.push_back(tolower(p[l]));
                l++;
            }
            w.push_back(temp);
            mp[temp]++;
        }
        for(string word: b)
        {
            mp[word]=0;
        }
        int freq = 0;
        string ans = "";
        for(string word:w)
        {
            if(mp[word]>freq)
            {
                freq = mp[word];
                ans = word;
            }
        }
        return ans;
    }
};