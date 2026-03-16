class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,vector<string>> m;
        for(auto x:strs)
        {
            string word = x;
            sort(word.begin(),word.end());
            m[word].push_back(x);
        }
        for(auto it:m)
        {
            result.push_back(it.second);
        }
        return result;
    }
};