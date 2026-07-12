class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        map<int,int> pos;
        vector<int> r;
        int count = 1;
        for(auto it:mp)
        {
            pos[it.first] = count;
            count++;
        }
        for(int x:arr)
        {
            r.push_back(pos[x]);
        }
        return r;
    }
};