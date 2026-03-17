class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> result;
        for(auto x:nums)
        {
            m[x]++;
        }
        vector<pair<int, int>> vc(m.begin(),m.end());
        sort(vc.begin(), vc.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });
        for(int i = 0;i<k;i++)
        {
            result.push_back(vc[i].first);
        }
        return result;
    }
};