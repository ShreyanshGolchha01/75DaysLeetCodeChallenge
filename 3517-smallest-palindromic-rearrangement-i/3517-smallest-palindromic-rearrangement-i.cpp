class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1) return s;
        map<char,int> mp;
        for(char c: s)
        {
            mp[c]++;
        }
        string rev = "";
        char c ='\0';
        auto it = mp.begin();
        while(it!=mp.end())
        {
            if(it->second==0)
            {
                it++;
            }
            else if(it->second%2!=0)
                {
                    c = it->first;
                    it->second--;
                }
            else
            {
                rev.push_back(it->first);
                it->second = it->second - 2;
            }
        }
        string rev1 = rev;
        reverse(rev1.begin(),rev1.end());
        rev+=rev1;
        if(c!='\0')
        {
            int mid = rev.size() / 2;
            rev.insert(mid, 1, c);
        }
        return rev;
    }
};