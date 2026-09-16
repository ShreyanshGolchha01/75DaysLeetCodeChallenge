class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini = nums[0];
        int ans = 0;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] - mini > ans)
                ans = nums[i] - mini;

            if(nums[i] < mini)
                mini = nums[i];
        }

        return ans;
    }
};