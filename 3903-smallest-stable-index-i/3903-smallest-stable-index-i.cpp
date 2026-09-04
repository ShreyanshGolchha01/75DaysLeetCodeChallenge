class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = nums[0];
        int ans = -1;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>=maxi)
            {
                maxi = nums[i];
            }
            int mini = INT_MAX;
            for(int j = i;j<nums.size();j++)
            {
                if(nums[j]<=mini)
                {
                    mini = nums[j];
                }
            }
            if((maxi - mini)<=k) {ans = i;break;}
        }
        return ans;
    }
};