class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        int a = 1;
        int b  = 1;
        int i = 1;
        for(auto& p:mp)
        {
            if(a==p.first) a++;
            if(p.second >1) b = p.first;
        }
        return {b,a};
    }
};