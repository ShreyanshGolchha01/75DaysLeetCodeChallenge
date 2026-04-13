class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int result1 = INT_MAX;
        int result2 = INT_MAX;
        if(nums[start]==target)
        {
            return 0;
        }
        for(int i = start;i<nums.size();i++)
        {
            if(target == nums[i])
            {
                result1 = abs(i - start);
                break;
            }
        }
        for(int i = start;i>=0;i--)
        {
            if(target == nums[i])
            {
                result2 = abs(start - i);
                break;
            }
        }
        return min(result1,result2);
    }
};