class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];

        int leftsum = 0;

        vector<int> left(nums.size());
        vector<int> right(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            left[i] = leftsum;
            leftsum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            right[i] = sum;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = abs(left[i] - right[i]);
        }

        return nums;
    }
};