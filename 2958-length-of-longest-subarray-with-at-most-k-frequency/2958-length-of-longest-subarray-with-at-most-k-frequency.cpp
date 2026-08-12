class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        // for(int i = 0;i<n;i++)
        // {
        //     map<int,int> mp;
        //     int count = 0;
        //     for(int j = i;j<n;j++)
        //     {
        //         if((mp[nums[j]]+1)>k)
        //         {
        //             break;
        //         }
        //         mp[nums[j]]++;
        //     }
        //     for(auto it:mp)
        //     {
        //         count+=it.second;
        //     }
        //     ans = max(ans,count);
        // }
        // return ans;
        map<int,int> mp;
        int left = 0;
        for(int right = 0;right<n;right++)
        {
            mp[nums[right]]++;
            while(mp[nums[right]]>k)
            {
                mp[nums[left++]]--;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};