class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto &a: knowledge)
        {
            mp[a[0]] = a[1];
        }
        string ans = "";
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                string k = "";
                i++;
                while(s[i]!=')')
                {
                    k.push_back(s[i]);
                    i++;
                }
                auto it = mp.find(k);
                if(it != mp.end())
                {
                    ans+=it->second;
                }
                else ans.push_back('?');
            }
            else
            ans.push_back(s[i]);
        }
        return ans;
    }
};